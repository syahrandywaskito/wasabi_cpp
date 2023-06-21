/**
 * Type Convertion dan Static_cast
 * 
 * Type convertion adalah sebuah perubahan tipe data dari sebuah value 
 * menjadi tipe data yang lain 
 * 
 * Implicity convertion -> konversi yang terjadi secara 'tersembunyi' 
 *                         melalui assigment value dari satu tipe dan ke tipe
 *                         yang lain. Passing argumen melalui parameter yang
 *                         berbeda tipe data termasuk sebuah implicity 
 *                         convertion. 
 * 
 * Explicity convertion -> konversi yang terjadi karena tambahan logika
 *                         melalui sebuah statement static_cast<type>(exprss)
 *                         
 * Contoh penggunaan explicity convertion
 * 
 * float number{4.5};
 * std::cout << static_cast<int>(number);
 * 
 * Konversi ke tipe data lain
 * int -> float/double = Value akan langsung terkonvesi
 * float/double -> int = value terkonversi dengan di dropnya pecahan
 * char -> int = value berubah menjadi ASCII Code sesuai char-nya
 * int -> char = value berubah menjadi character sesuai dengan ASCII Codenya
 * 
 * Urutan konversi
 * 
 * nilai tipe data awal -> menjadi input di static_cast -> output value dengan tipe data baru
 * double num{9.7} -> input:static_cast<int>(num) -> output:num{9}; (Int type)
*/

#include <iostream>



void print(int num);

int main(int argc, char const *argv[])
{
  double num{70.83};

  std::cout << num << '\n';

  print(num);

  return 0;
}

void print(int num)
{

  double num_fun{static_cast<double>(num)};

  char char_func{static_cast<char>(num)};

  std::cout << num_fun << '\n' << static_cast<int>(char_func) << std::endl;
  std::cout << char_func << '\n';
}
