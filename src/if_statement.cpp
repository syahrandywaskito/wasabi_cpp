#include <iostream>

int main(int argc, char const *argv[])
{
  // if statement without curly brace
  int num{10};
  if(num == 10)
    std::cout << "Num = 10\n";
    std::cout << "show!!\n"; // tidak ikut dalam if statement
  
  
  return 0;
}
