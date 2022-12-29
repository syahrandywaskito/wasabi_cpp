#include "standard_calculation.h"
#include <iostream>

void inputNumber(){
	
	// Deklarasi variabel
	int num1{}, num2{}; 
	char opr{};
	std::cout <<  "> "; std::cin >> num1 >> opr >> num2;

	// penggunaan fungsi proses()
	outputValue(num1, opr, num2);
}

// standard calculation / math operation
int addition(int num1, int num2){
	return num1 + num2;
}

int subtraction(int num1, int num2){
	return num1 - num2;
}

int multiplied(int num1, int num2){
	return num1 * num2;
}

int divided(int num1, int num2){
	if ((num1 == 0)&&(num2 == 0)){
		return 10; // unvalid code
	}
	else if ((num1 != 0)&&(num2 == 0)){
		return 11; // undefined code
	}
	else{
		return num1 / num2;
	}
}

int modulation(int num1, int num2){
	return num1 % num2;
}

int power(int num1, int num2){
	int result{1};
	for (int i = 1; i <= num2; i++){
		result *= num1;

	}
	return result;
	
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
		std::cout << "Error!!" << std::endl;
	}
	
	inputNumber();
}