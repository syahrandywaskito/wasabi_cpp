/*
	Program kalkulator sederhana menggunakan c++
	Program akan ditambahakan fitur seiring dengan bertambahnya
	pengetahuan / ilmu tentang c++

	"Project On Going"

	Pembuatan program murni menggunakan c++

	~~Wasabi~~
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void input();
void output(int nilaiAwal, int nilaiAkhir, int hasilOperasi, char operatorProses);
void proses(int nilaiAwal, char operatorProses, int nilaiAkhir);
void help();

int main(){

	// Header awal saat program dieksekusi
	cout << "\nSIMPLE CALCULATOR WITH C++\n";
	cout << "Sebuah kalkulator sederhana yang dibuat dengan C++\n";
	cout << "Melihat informasi operator (Y/N)?";

	// variabel question
	char question{};
	cin >> question;

	// pemilihan fungsi help() dan calc()
	if (question == 'y'||question == 'Y'){
		help();
	}
	else if(question == 'n' || question == 'N'){
		input();
	}
	else{
		cout << "Command doesn't valid, please enter valid command again!" << endl;
		main();
	}
	return EXIT_SUCCESS;
}

void input(){

	// input dan output
	cout << "\n~~ Calculator ~~\n";
	cout << "Masukkan bilangan pertama dan kedua, serta Operatornya\n";
	
	// Deklarasi variabel
	int x{}, y{}; 
	char opr{};
	cout <<  ">"; cin >> x >> opr >> y;

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
	// program akan selesai saat kondisi pembagian selesai diekseskusi
	else if (operatorProses == '/'){
		if ((nilaiAwal == 0)&&(nilaiAkhir == 0)){
			cout << "0 / 0 tidak valid" << endl;
		}
		else if ((nilaiAwal != 0)&&(nilaiAkhir == 0)){
			cout << nilaiAwal << " / " << nilaiAkhir << " tidak terdefinisi" << endl;
		}
		else{
			cout << nilaiAwal << " / " << nilaiAkhir << " = " << nilaiAwal / nilaiAkhir << endl;	
		}
		// setelah proses selesai akan kembali ke funsi input()
		input();
	}
	else if (operatorProses == '%'){
		hasilOperasi = nilaiAwal % nilaiAkhir;
	}
	else if (operatorProses == '^'){
		hasilOperasi = pow(nilaiAwal, nilaiAkhir);
	}
	else{
		cout << "Tidak valid, tolong masukkan operator yang benar" << endl;
	}
	output(nilaiAwal, nilaiAkhir, hasilOperasi, operatorProses);
}

// fungsi output untuk menampilkan hasil pada console
void output(int nilaiAwal, int nilaiAkhir, int hasilOperasi, char operatorProses){

	// menampilkan output dari semua data ke console
	cout << nilaiAwal << operatorProses << nilaiAkhir << " = " << hasilOperasi << endl;

	// akan kembali ke fungsi input()
	input();
}

// fungsi yang berisi help dari setiap operator
void help(){
	cout << "\n~~ Help ~~\n";
	cout << "Calculator operator Help (bantuan untuk operator kalkulator)\n";
	cout << "Operator 	Keterangan\n";
	cout << "----------------------------------------------------------\n";
	cout << "   +		Operator penambah dua atau lebih operand\n";
	cout << "   - 		Operator pengurang dua atau lebih operand\n";
	cout << "   *		Operator pengali dua atau lebih operand\n";
	cout << "   / 		Operator pembagi dua atau leih operand\n";
	cout << "   % 		Operator modulo (mengetahui sisa bagi)\n";
	cout << "   ^  		Operator pemangkat dua untuk operand\n";
	cout << "Untuk keluar dari kalkulator tekan : control(ctrl) + c\n";

	// pilihan kembali ke kalkulator atau tidak
	char question{};
	cout << "Kembali ke kalkulator (Y/N)? ";
	cin >> question;

	if (question == 'y' || question == 'Y'){
		cout << endl;
		input();
	}
	else if(question == 'n' || question == 'N'){
	}
	else{
		cout << "Invalid command, please input again!\n";
		help();
	}
}