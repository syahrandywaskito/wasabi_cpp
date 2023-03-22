/**
 * Fixed width pada c++
 * fixed width ada karena perbedaan ukuran tipe data pada 
 * C++ pada setiap arsitekture komputer
 * Fixed Width berada pada library
 * stdint.h dan cstdint
 * contoh fixed width std::int8_t
 * karena berada pada namespace std, maka penulisan fixed width
 * menggunakan prefix "std::"
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
