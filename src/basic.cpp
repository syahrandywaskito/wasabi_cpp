#include <iostream>
#include "includes/header.h"
#include "includes/formula.h"

// macro directive
#define MY_AGE 18

int main(){
	hallo();
	std::cout << "basic cpp\n";
	std::cout << "My Age is : " << MY_AGE << std::endl;
	std::cout << "Area of Triangle if base 4 and height 3 is " << areaTriangle(4, 3) << std::endl;
	return 0;
}

// forward declaration di file terpisah
void hallo(){
	std::cout << "hallo\n";
}