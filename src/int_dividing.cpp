/**
 * Proses pembagian menggunakan dua nilai bertipe integer
 * dan melihat hasil pembagian yang ditampilkan
 * Date 1-Maret-2023
*/

#include <iostream>

int main(int argc, char const *argv[])
{
  std::cout << "Input 2 data to dividing : \n";

  // evaluated
  int operand1{}, operand2{};
  float result{};
  std::cout << "Input 1 : "; std::cin >> operand1;
  std::cout << "Input 2 : "; std::cin >> operand2;
  result = (float)operand1 / (float)operand2;

  // output 
  std::cout << "Divided Result is " << result << std::endl; 
  return 0;
}

/**
 * Pembagian menggunakan int akan menghasilkan data bertipe int juga
 * Untuk melihat data hasil pembagian dengan lebih lengkap -
 * dapat menggunakan float
 * operand bertipe int sedangkan result bertipe float
 * Untuk mendapatkan hasil pecahan, cukup meng-konversi nilai menjadi -
 * nilai yang memiliki tipe data float
 * !!syaratnya, tipe data variabel yang menampung hasil harus float!!
*/
