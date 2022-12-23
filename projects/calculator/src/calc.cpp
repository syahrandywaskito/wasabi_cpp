#include "calc.h"
#include <iostream>
#include <math.h>

void input(){

	// input dan output
	std::cout << "\n~~ Calculator ~~\n";
	std::cout << "Masukkan bilangan pertama dan kedua, serta Operatornya\n";
	
	// Deklarasi variabel
	int x{}, y{}; 
	char opr{};
	std::cout <<  ">"; std::cin >> x >> opr >> y;

	// penggunaan fungsi proses()
	proses(x, opr, y);
}

// fungsi untuk proses aplikasi kalkulator
void proses(int nilaiAwal, char operatorProses, int nilaiAkhir){
	// variabel hasil untuk menampung hasil 
	int hasilOperasi{};

	// Memilih operasi sesuai operator yang diinputkan
	if (operatorProses == '+'){
		hasilOperasi = nilaiAwal + nilaiAkhir;
	}
	else if (operatorProses == '-'){ 
		hasilOperasi = nilaiAwal - nilaiAkhir;
	}
	else if (operatorProses == '*'){
		hasilOperasi = nilaiAwal * nilaiAkhir;
	}
	// variabel alert untuk memberitahu bahwa penghitungan tidak valid
	else if (operatorProses == '/'){
		if ((nilaiAwal == 0)&&(nilaiAkhir == 0)){
			hasilOperasi = 001; // kode 001 untuk tidak valid
		}
		else if ((nilaiAwal != 0)&&(nilaiAkhir == 0)){
			hasilOperasi = 002; // kode 002 untuk tidak terdefinisi 
		}
		else if ((nilaiAwal != 0)&&(nilaiAkhir != 0)){
			hasilOperasi = nilaiAwal / nilaiAkhir;
		}
	}
	else if (operatorProses == '%'){
		hasilOperasi = nilaiAwal % nilaiAkhir;
	}
	else if (operatorProses == '^'){
		hasilOperasi = pow(nilaiAwal, nilaiAkhir);
	}
	else{
		std::cout << "Tidak valid, tolong masukkan operator yang benar" << std::endl;
	}
	output(nilaiAwal, nilaiAkhir, hasilOperasi, operatorProses);
}

// fungsi output untuk menampilkan hasil pada console
void output(int nilaiAwal, int nilaiAkhir, int hasilOperasi, char operatorProses){

	if (hasilOperasi == 001){
			std::cout << "Tidak Valid" << std::endl;
	}
	else if (hasilOperasi == 002){
			std::cout << nilaiAwal << " / " << nilaiAkhir << " Tidak Terdefinisi" << std::endl;
	}
	else{
		// menampilkan output dari semua data ke console
		std::cout << nilaiAwal << operatorProses << nilaiAkhir << " = " << hasilOperasi << std::endl;
	}

	// akan kembali ke fungsi input()
	input();
}

// fungsi yang berisi help dari setiap operator
void help(){
	std::cout << "\n~~ Help ~~\n";
	std::cout << "Calculator operator Help (bantuan untuk operator kalkulator)\n";
	std::cout << "Operator 	Keterangan\n";
	std::cout << "----------------------------------------------------------\n";
	std::cout << "   +		Operator penambah dua atau lebih operand\n";
	std::cout << "   - 		Operator pengurang dua atau lebih operand\n";
	std::cout << "   *		Operator pengali dua atau lebih operand\n";
	std::cout << "   / 		Operator pembagi dua atau leih operand\n";
	std::cout << "   % 		Operator modulo (mengetahui sisa bagi)\n";
	std::cout << "   ^  		Operator pemangkat dua untuk operand\n";
	std::cout << "Untuk keluar dari kalkulator tekan : control(ctrl) + c\n";

	// pilihan kembali ke kalkulator atau tidak
	char question{};
	std::cout << "Kembali ke kalkulator (Y/N)? ";
	std::cin >> question;

	if (question == 'y' || question == 'Y'){
		std::cout << std::endl;
		input();
	}
	else if(question == 'n' || question == 'N'){
        // code 
	}
	else{
		std::cout << "Invalid command, please input again!\n";
		help();
	}
}