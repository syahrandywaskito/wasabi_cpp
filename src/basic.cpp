#include <iostream>
#include "includes/header.h"

// macro directive
#define MY_AGE 18

int main(){
	hallo();
	std::cout << "basic cpp\n";
	std::cout << "My Age is : " << MY_AGE << std::endl;
	return 0;
}

void hallo(){
	std::cout << "hallo\n";
}