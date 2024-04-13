#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  
  /**
   * * variable di deklarasi menggunakan std::string
   * ? Mencari ukuran dari variabel menggunakan size dan length function
  */

  std::string fullName {"Wasabi Hamada"};

  std::cout << "What Size : \n";
  std::cout << "-> string fullName size is : " << fullName.length() << '\n';

  return 0;
}
