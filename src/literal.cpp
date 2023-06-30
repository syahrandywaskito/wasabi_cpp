/**
 *  Literal
 * 
 * Ada berbagai macam type value dari literal (Integer, boolean, floating point, character, C-style string)
 * 
 * Untuk menggunkan literal yang memiliki/mengindikasikan tipe data khusus, gunakan suffix literal yang merupakan singkatan dari tipe data yang ada di c++, contoh penulisan suffix literal
 * 
 * literal = 4UL (value 4 dengan tipe data Unsigned Long)
 * 
 * Dalam sebuah C-style string terdapat null terminator yang akan membuat ukuran dari string lebih satu, contoh string "hai", ukuran string adalah 4 walaupun char cuma 3, hal itu dikarenakan null terminator. null terminator biasanya dituliskan dengan \0 dan disebut sebagai null-terminated string. Fungsi dari null terminator adalah mengakhiri sebuah string. 
 * 
 * Magic Number 
 * 
 * Magic number merupakan sebuah literal yang tidak tahu asalnya darimana atau tidak tahu dimaksudkan untuk apa (Out Off Knowhere Literal)
 * 
 * contoh : setMax{40} 
 * 
 * untuk menghindari magic number, gunakan constexprr untuk deklarasi awal variabel yang memiliki value tetap, value tersebut sudah memiliki makna dan dapat digunakan di manapun di dalam program
 * 
 * 
*/

#include <cstddef>
#include <iostream>



int main(int argc, char const *argv[])
{
  std::cout << "Unsigned Int : " << -1U << '\n';
  std::cout << "Unsigned Long Int : " << -1UL << '\n';
  std::cout << "Unsigned Int : " << 1U << '\n';
  std::cout << "Signed Int : " << -1 << '\n';
  std::cout << "Float : " << -1.0F << '\n';
  std::cout << "Double : " << -1.0L << '\n';
  std::cout << "Hai\n"; // char 4 + 1 null terminator

  std::cout << "Int + Long : " << 2L + -5U << '\n';
  std::cout << "Double + Float : " << 2.0134 + 5.0223F << '\n';


  // std::cout << "String : " <<  << '\n';
  // std::cout << "Signed Size_t Int : " <<  << '\n';

  // std::size_t integral_number{4};
  // std::cout << "size using size_t : " << sizeof(integral_number) << '\n';
  return 0;
}
