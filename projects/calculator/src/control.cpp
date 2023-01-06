#include "control.h"
#include "standard_calculation.h"
#include "help.h"
#include <iostream>

void inputNumber(){
	
	// Deklarasi variabel
	int num1{}, num2{}; 
	char opr{};
	std::cout <<  "> "; std::cin >> num1 >> opr >> num2;
	
		outputValue(num1, opr, num2);
	
}

// Output Value from calculation function
void outputValue(int num1, char operatorProses, int num2){
	switch (operatorProses){
	case '+':
		std::cout << addition(num1, num2) << std::endl;
		break;
	case '-':
		std::cout << subtraction(num1, num2) << std::endl;
		break;
	case '*':
		std::cout << multiplied(num1, num2) << std::endl;
		break;
	case '/':
		if (divided(num1, num2) == 10){
			std::cout << "Invalid\n";
		}
		else if (divided(num1, num2) == 11){
			std::cout << "Undefined\n";
		}
		else{
			std::cout << divided(num1, num2) << std::endl;
		}
		break;
	case '%':
		std::cout << modulation(num1, num2) << std::endl;
		break;
	case '^':
		std::cout << power(num1, num2) << std::endl;
		break;
	default:
		std::cout << "program ended!!" << std::endl;
	}
	
	inputNumber();
}