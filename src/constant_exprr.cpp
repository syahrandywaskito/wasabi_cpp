/** 
 * Constant Expression dan Compile-time constant / Run-time constant
 * 
 * Constant expression adalah sebuah expression yang berbentuk constant dan akan dieksekusi saat proses
 * compile, atau juga bisa disebut sebagai compile-time constant.
 * 
 * Constant Expression memiliki keyword tersendiri khusus, keyword tersebut adalah constexpr
 * constexpr akan error jika value bukan constant expression 
 * 
 * penggunaan constexpr dam const digunakan untuk pembeda anatara compile-time constant dan run-time
 * constant
 * 
 * Ciri-ciri run-time constant adalah valuenya dipengaruhi dari luar seperti value constant dari value
 * variabel non-constant
 * 
 * Variabel yang di deklarasi dengan constant exprr dapat digunakan di dalam constant exprr juga
 * 
*/


#include <iostream>


int main(int argc, char const *argv[])
{
  
  int constant_value{5};
  constexpr int constant_expr{4};
  const int constant_std{constant_value};

  const int const_x{7};
  const int const_y{8};

  constexpr int const_z{const_x + const_y};

  std::cout << constant_expr << '\n';
  std::cout << constant_std << '\n';
  std::cout << const_z << '\n';
  return 0;
}

