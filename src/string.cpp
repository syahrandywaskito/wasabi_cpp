#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
  

  // input umur pengguna
  std::cout << "Input umur anda : ";
  short umur{};
  std::cin >> umur;

  // input string nama lengkap 
  std::cout << "Input nama lengkap : ";
  // deklarasi variabel dengan tipe data string
  std::string nama{};
  std::getline(std::cin >> std::ws, nama);
  // std::cin >> nama;

  // output nama lengkap
  std::cout << "Nama lengkap anda : " << nama << ", dan umur anda : " << umur << '\n';
  return 0;
}
