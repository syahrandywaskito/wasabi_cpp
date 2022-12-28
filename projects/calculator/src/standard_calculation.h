// Identifier contain Project Name_PATH_File Name  
#ifndef CALCULATOR_PROJECTS_CALCULATOR_SRC_CALC_H
#define CALCULATOR_PROJECTS_CALCULATOR_SRC_CALC_H

void inputNumber();
void outputValue(int num1, char operatorProses, int num2);

// standard calculation / math operation
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplied(int num1, int num2);
int divided(int num1, int num2);
int modulation(int num1, int num2);
int power(int num1, int num2);

void help();

#endif