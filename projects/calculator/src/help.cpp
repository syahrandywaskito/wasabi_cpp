#include "help.h"
#include "standard_calculation.h"
#include <iostream>


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
		inputNumber();
	}
	else if(question == 'n' || question == 'N'){
        // code 
	}
	else{
		std::cout << "Invalid command, please input again!\n";
		help();
	}
}