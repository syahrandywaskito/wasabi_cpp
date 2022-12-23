/*
	Program kalkulator sederhana menggunakan c++
	Program akan ditambahakan fitur seiring dengan bertambahnya
	pengetahuan / ilmu tentang c++

	"Project On Going"

	Pembuatan program murni menggunakan c++

	~~Wasabi~~
*/

#include "calc.h"
#include <iostream>
#include <math.h>
#include <cstdlib>


int main(){

	// Header awal saat program dieksekusi
	std::cout << "\nSIMPLE CALCULATOR WITH C++\n";
	std::cout << "Sebuah kalkulator sederhana yang dibuat dengan C++\n";
	std::cout << "Melihat informasi operator (Y/N)?";

	// variabel question
	char question{};
	std::cin >> question;

	// pemilihan fungsi help() dan calc()
	if (question == 'y'||question == 'Y'){
		help();
	}
	else if(question == 'n' || question == 'N'){
		input();
	}
	else{
		std::cout << "Command doesn't valid, please enter valid command again!" << std::endl;
		main();
	}
	return EXIT_SUCCESS;
}