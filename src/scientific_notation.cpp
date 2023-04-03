#include <iostream>
#include <typeinfo>
#include <iomanip>


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
  std::cout << std::setprecision(17);
  std::cout << 1234556789011.45f << "\n"; // otomatis akan dikonversi menjadi scientific notation
  std::cout << 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 << "\n";

  // NaN dan infinity (inf)
  std::cout << "Nan & Infinity\n";
  std::cout << "0.0 / 0.0 = " << 0.0 / 0.0 << "\n";
  std::cout << "5.0 / 0.0 = " << 5.0 / 0.0 << "\n";
  std::cout << "-5.0 / 0.0 = " << -5.0 / 0.0 << "\n";

  return 0;
}
