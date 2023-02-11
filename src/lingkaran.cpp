/*
  program untuk mencari luas lingkaran
  proses penghitungan luas berjalan dengan
  pemilihan jari-jari
  jari-jari dicek apakah habis dibagi 7 atau tidak
*/
#include <iostream>
#include <math.h>

// PI digunakan sebagai alat hitungan untuk jari-jari tidak habis dibagi 7
const float PI{3.14};

int main(int argc, char const *argv[]) {
  int radius{0}, diameter{0}, temp{0}, modulo{0};
  float result{0};
  //input
  std::cout << "masukkan jari-jari = "; std::cin >> radius;

  // process
  // find diameter
  diameter = radius * 2;
  std::cout << "diameter = " << diameter << "\n";
  //assign nilai untuk proses pengambilan nilai sisa bagi
  temp = radius;
  modulo = temp % 7;
  // pengecekan apakah jari-jari habis dibagi 7 atau tidak
  if (modulo == 0) {
    result = 22 * pow(radius, 2) / 7;
  }
  else{
    result = PI * pow(radius, 2);
  }
  
  // output
  std::cout << "luas lingkaran = " << result << std::endl;
  return 0;
}
