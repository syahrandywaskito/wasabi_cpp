#include <iostream>


int main(int argc, char const *argv[])
{
  bool kondisi_1{true}, 
       kondisi_2{},
       kondisi_3{!false}; // default inisialisasi = false
  bool int_bool_1 = 2, int_bool_2 = 0;
  bool input_bool_1{};

  std::cout << "Masukan kondisi : "; 
  std::cin >> std::boolalpha;
  std::cin >> input_bool_1;
  std::cout << std::boolalpha;
  std::cout << "Kondisi : " << input_bool_1 << "\n";

  std::cout << std::noboolalpha;

  std::cout << "Kondisi bernilai : " << kondisi_1 << "\n";
  std::cout << "Kondisi bernilai : " << kondisi_2 << "\n";

  std::cout << std::boolalpha;
  std::cout << "Kondisi bernilai : " << kondisi_3 << "\n";

  std::cout << std::noboolalpha;
  std::cout << "Kondisi bernilai : " << !kondisi_3 << "\n";

  std::cout << "Kondisi bernilai : " << int_bool_1 << "\n";
  std::cout << "Kondisi bernilai : " << int_bool_2 << "\n";

  
  return 0;
}
