#include "standard_calculation.h"
#include "control.h"
#include <iostream>

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
