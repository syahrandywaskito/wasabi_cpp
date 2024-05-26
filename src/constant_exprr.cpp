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
 * Jika satu saja constant yang diinisialisasi dengan non-constant maka seterusnya tidak dapat digunakan
 * dalam constant-expressions
*/


#include <iostream>
#include <type_traits>

consteval int lessthan(int x, int y);

constexpr int greater(int x, int y)
{
  return (x > y) ? x : y;
}

// constexpr int isConstant()
// {
//   if (std::is_constant_evaluated())
//   {
//     return 1;
//   }
  
//   return 2;
  
// }

int main(int argc, char const *argv[])
{
  
  int non_constant_value{5}; // non-constant

  // const exprr akan memiliki keyword tersendiri yaitu constexprr
  constexpr int constant_expr{4}; // const exprr karena langsung berbentuk literal tunggal tanpa evaluasi

  // const dipengaruhi dari luar maka dapat dikategorikan sebagai run-time constant
  const int constant_std{non_constant_value};

  // karena nilai const dimasukkan sebuah non-constant dan dimasukkan lagi ke dalam const exprr pada baris 39
  const int const_x{constant_std}; // error not usable in const exprr (karena dimasukkan variabel non-contstant)
  const int const_y{8};


  constexpr int x {10};
  constexpr int y {4};
  constexpr int const_z{10 + const_y};
  constexpr int g {greater(x, y)};
  // constexpr int is_constant {isConstant()};

  std::cout << constant_expr << '\n';
  std::cout << constant_std << '\n';
  std::cout << const_z << '\n';

  std::cout << g << std::endl;
  // std::cout << isConstant() << std::endl;

  std::cin.get();

  return 0;
}

constexpr int lessthan(int x, int y)
{
  return (x < y) ? x : y;
}