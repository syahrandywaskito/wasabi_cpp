#include <iostream>
#include <string>
#include <string_view>


int main(int argc, char const *argv[])
{
  // digunakan untuk suffix s std::string agar string tidak menjadi C-style String
  using namespace std::string_literals;

  // input umur pengguna
  std::cout << "Input umur anda : "s;
  short umur{};
  std::cin >> umur;

  // input string nama lengkap 
  std::cout << "Input nama lengkap : "s;
  // deklarasi variabel dengan tipe data string
  std::string nama{};
  std::getline(std::cin >> std::ws, nama);
  std::cout << "Nama memiliki "s << nama.length() << " karakter\n"s;
  std::cout << "Nama lengkap anda : "s << nama << ", dan umur anda : "s << umur << '\n';

  short letters {static_cast<short>(nama.length())};
  std::cout <<"\nPanjang Karakter nama + umur = "s << letters + umur << '\n';

  std::string_view text {"Read-Only string using string view"};
  std::cout << text << std::endl;

  return 0;
}
