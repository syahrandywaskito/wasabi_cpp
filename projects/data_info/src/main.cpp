/**
 * This project tell about Data Type.
 * Information  contain :
 * Size, Data Information, Using, and more
*/

#include "size.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  std::string data_type{};
  std::cout << "Ukuran tipe data : "; std::cin >> data_type;
  size(data_type);
  return 0;
}

