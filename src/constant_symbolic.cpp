/**
 * Constant Variables dan Symbolic Constant
 * 
 * constant adalah sebuah keyword untuk membuat sebuah nilai di variabel menjadi fixed (tetap)
 * constant juga bisa disebut sebagai read-only value atau variabel
 * 
 * constant tidak dapat diubah bagaimanapun caranya. Meskipun itu menggunakan assigment atau 
 * merubahnya menggunakan inisialisasi variabel yang non-constant. Untuk inisialisasi constant menggunakan
 * variabel non-constant hanya bisa dilakukan 1 kali.
 * 
 * contoh :
 * const double PI{3.14};
 * PI = 22/7; -> akan menyebabkan error
 * 
 * Lebih baik gunakan constant variabel daripada object-like macro (#define preprocessor)
 * alasan :
 *    => Susah saat proses debug karena object-like macro bukan variabel yang berakibat tidak keluarnya
 *       value saat debug
 *    => Permasalahan nama yang sama dapat mengehentikan program. Jika object-like macro memiliki nama 
 *       yang sama dengan yang ada di code, maka program akan berhenti
 *    => Permasalahan scoping nilai yang ada pada Object-like macro
 * 
*/

#include <iostream>


int main(int argc, char const *argv[])
{

  std::cout << "Input speed : ";
  // normal variable
  double speed_now{};
  std::cin >> speed_now;

  // const variable
  const double speed_fixed{speed_now};

  std::cout << "speed is " << speed_fixed << '\n';

  std::cout << "Input second time : ";
  std::cin >> speed_now;

  std::cout << "speed fixed is " << speed_fixed << '\n';
  std::cout << "speed now is " << speed_now << '\n';


  return 0;
}
