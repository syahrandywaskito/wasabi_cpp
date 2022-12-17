/*
  program untuk mencari luas lingkaran
  proses penghitungan luas berjalan dengan
  pemilihan jari-jari
  jari-jari dicek apakah habis dibagi 7 atau tidak
*/
#include <iostream>
#include <math.h>
using namespace std;

// PI digunakan sebagai alat hitungan untuk jari-jari tidak habis dibagi 7
#define PI 3.14

int main(int argc, char const *argv[]) {
  int radius = 0, diameter = 0, varContainer, modulo;
  float result = 0;
  //input
  cout << "masukkan jari-jari = "; cin >> radius;

  // process
  // find diameter
  diameter = radius * 2;
  cout << "diameter = " << diameter << endl;
  //assign nilai untuk proses pengambilan nilai sisa bagi
  varContainer = radius;
  modulo = varContainer % 7;
  // pengecekan apakah jari-jari habis dibagi 7 atau tidak
  if (modulo == 0) {
    result = 22 * pow(radius, 2) / 7;
  }
  else{
    result = PI * pow(radius, 2);
  }
  
  // output
  cout << "luas lingkaran = " << result << endl;
  return 0;
}
