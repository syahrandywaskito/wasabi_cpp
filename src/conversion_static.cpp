/**
 * Type Convertion dan Static_cast
 * 
*/

#include <iostream>



void print(int num);

int main(int argc, char const *argv[])
{
  int num{6.5};

  print(num);

  return 0;
}

void print(int num)
{
  std::cout << "Print " << num << std::endl;
}
