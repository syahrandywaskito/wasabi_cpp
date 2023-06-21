/**
 * Scientific Notation
 * 
 * Scientific notation merupakan sebuah notasi sains yang digunakan
 * untuk menuliskan bilangan yang jumlahnya sangat besar atapun jumlahnya
 * sangat kecil
 * 
*/

#include <typeinfo>
#include <iomanip>
#include <iostream>


int main(int argc, char const *argv[])
{
  double num{0.0f};


  std::cout << "Input float number : "; std::cin >> num;

  // std::scientific berguna untuk menunjukan scientific notation dari nilai 
  // std::cout << std::scientific;

  std::cout << "Variabel type is : " << typeid(num).name() << "\n";
  std::cout << "num : " << num << "\n"; 
  std::cout << "float point : " << 5.0f << "\n";

  // io manipulation
  std::cout << std::setprecision(4);
  std::cout << 1234556789011.45f << "\n"; // otomatis akan dikonversi menjadi scientific notation
  std::cout << 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 << "\n";

  // NaN dan infinity (inf)
  std::cout << "Nan & Infinity\n";
  std::cout << "0.0 / 0.0 = " << 0.0 / 0.0 << "\n";
  std::cout << "5.0 / 0.0 = " << 5.0 / 0.0 << "\n";
  std::cout << "-5.0 / 0.0 = " << -5.0 / 0.0 << "\n";

  int x{0}, y{0};
  std::cout << "input nilai pembagian : "; std::cin >> x >> y;

  float result{(float)x / (float)y};
  std::cout << "Hasil : " << result << "\n";  

  return 0;
}

/**
 * NaN dan Infinity hanya bisa meuncul jika tipe data yang digunakan adalah 
 * tipe data bilangan real yaitu float, double, long double
 * jika menggunakan integer, hasil dari NaN dan Infinity tidak akan keluar 
*/