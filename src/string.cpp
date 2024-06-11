#include <iostream>
#include <string>
#include <string_view>


void printNama(std::string_view nama);
void printString(std::string str);

std::string_view sebuahKata();
std::string_view paramView(std::string_view param1, std::string_view param2);

int main(int argc, char const *argv[])
{
  // digunakan untuk suffix s std::string agar string tidak menjadi C-style String
  using namespace std::string_literals;
  using namespace std::string_view_literals;

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
  printNama(nama);

  // string view tidak dapat digunakan bersamaan dengan cin
  std::string_view text {"Read-Only string using string view"};
  std::cout << text << std::endl;

  std::cout << std::endl;

  // switch type antara string_view dan string
  std::string kata1 {"hallo"s};
  std::cout << "String 1 : " << kata1 << '\n';

  std::string_view kata2 {kata1};
  std::cout << "String View : " << kata2 << '\n';

  // perubahan kata yang sedang di view oleh std::string_view
  // kata1 = "Hai"s;
  
  std::string kata3 {kata2};
  std::cout << "String 2 : " << kata3 << '\n';

  kata2 = "World !!";
  std::cout << "Assign String View : " << kata2 << '\n';

  constexpr std::string_view conststr {"Constexpr String diajalankan di compile-time"};
  std::cout << conststr << '\n';

  std::cout << std::endl;

  std::cout << "C-style String tanpa suffix\n";
  std::cout << "std::string menggunakan suffix s\n"s;
  std::cout << "std::string_view menggunakan suffix sv\n"sv; 

  std::cout << std::endl;

  // printString(kata2);
  printString(static_cast<std::string>(kata2));
  std::cout << sebuahKata() << '\n';
  std::cout << paramView("hai", "why") << '\n';

  return 0;
}

void printNama(std::string_view nama)
{
  // penggunaan string_view dapat mengurangi copy dari string
  std::cout << "Nama diprint oleh fungsi : " << nama << std::endl; 
}

// value akan dicopy oleh parameter std::string
void printString(std::string str)
{
  std::cout << "String di print ke console : " << str << std::endl;
}

// syarat penggunaan std::string_view sebagai function return type
// harus langsung digunakan pada return, dan tidak melalui evaluasi yang lain
std::string_view sebuahKata()
{
  // std::string kata {"sebuah kata dari var local fungsi"};

  // return kata;

  return "Sebuah kata dari fungsi string_view";
}

std::string_view paramView(std::string_view param1, std::string_view param2)
{
  return param1 < param2 ? param1 : param2;
}