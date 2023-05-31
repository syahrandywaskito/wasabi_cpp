/**
 * Fixed width pada c++
 * fixed width ada karena perbedaan ukuran tipe data pada 
 * C++ pada setiap arsitektur komputer
 * 
 * Fixed Width berada pada library
 * stdint.h dan cstdint
 * contoh fixed width std::int8_t (int yang memiliki ukuran 1byte atau 8 bit)
 * karena berada pada namespace std, maka penulisan fixed width
 * menggunakan prefix "std::"
 * 
 * fixed width memiliki bentuk Fast dan least yang berfungsi masing-masing 
 * sebagai berikut
 * 
 * Fast : digunakan untuk mengetahui tipe data mana yang cepat untuk 
 *        arsitektur pc yang digunakan. Biasanya akan menunjukan jumlah dari
 *        bitnya seperti 64 bit atau 32 bit
 * 
 * Least : kebalikan dari Fast. Least digunakan untuk mengetahui "setidaknya"
 *         tipe data apa yang dapat digunakan untuk arsitektur pc yang 
 *         digunakan. Jika pc yang digunakan cocok untuk 32bit maka least64 
 *         akan menghasilkan nilai 32 yang artinya arsitektur ini cocok untuk
 *         fixed width 32 bit 
 * 
 * Namun penggunaan fast dan least sebaiknya dihindari karena ketidakpastian 
 * ukuran yang diberikan, lebih dianjurkan menggunakan fixed width normal
*/

#include <cstdint>
#include <cstddef>
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
  std::cout << "Size : " << sizeof(std::int16_t) << "\n";
  std::cout << "Least : " << sizeof(std::int_least16_t) * 8 << "\n";
  std::cout << "Least : " << sizeof(std::int_least32_t) * 8 << "\n";
  std::cout << "Least : " << sizeof(std::int_least64_t) * 8 << "\n";
  std::cout << "Fast : " << sizeof(std::int_fast16_t) * 8 << "\n";
  std::cout << "Fast : " << sizeof(std::int_fast32_t) * 8 << "\n";
  std::cout << "Fast : " << sizeof(std::int_fast64_t) * 8 << "\n";

  std::uint_fast64_t num{0};
  --num;
  std::cout << "Num is : " << num << "\n";

  std::cout << "size_t : " << sizeof(size_t) << " Byte\n";

  return EXIT_SUCCESS;
}
