/**
 * Boolean course
 * Membahas bagaimana tipe data boolean bekerja
 * Tipe data boolean terdiri dari dua nilai yaitu 
 * TRUE (1) : pernyaataan benar / pernyataan jika bernilai benar
 * FALSE (0) : pernyataan salah / pernyataan jika bernilai salah
 * 
 * Pada boolean dapat menggunakan nilai lebih dari satu untuk
 * menunjukan bahwa pernyataan tersebut benar
 * 
 * contoh : 
 * bool str{2}; -> pernyataan akan bernilai benar (lebih baik menggunakan 1 dan 0 saja untuk numbernya)
 * 
 * cara untuk merubah pernyaataan number menjadi string dapat menggunakan iomanip header 
 * iomanip header berisisi sebuah statement untuk merubah/memanipulasi input dan output
 * 
 * iomanip untuk boolean :
 * std::boolalpha = digunakan untuk merubah bool number menjadi string
 *                  1 => true
 * std::noboolalpha = digunakan untuk merubah bool string menjadi number (!boolalpha)
 *                  false => 0
 * 
 * Boolean biasanya digunakan pada conditional statement dan pada perbandingan
 * boolean juga digunakan di loop contohnya adalah WHILE
 * pada WHILE selama kondisi bernilai true makan perulangan akan terus berjalan
*/


#include <iostream>


int main(int argc, char const *argv[])
{
  bool kondisi_1{true}, 
       kondisi_2{},
       kondisi_3{!false}; // default inisialisasi = false
  bool int_bool_1 = 2, int_bool_2 = 0;
  bool input_bool_1{};

  std::cout << "Masukan kondisi : "; 
  std::cin >> std::boolalpha;
  std::cin >> input_bool_1;
  std::cout << std::boolalpha;
  std::cout << "Kondisi : " << input_bool_1 << "\n";

  std::cout << std::noboolalpha;

  std::cout << "Kondisi bernilai : " << kondisi_1 << "\n";
  std::cout << "Kondisi bernilai : " << kondisi_2 << "\n";

  std::cout << std::boolalpha;
  std::cout << "Kondisi bernilai : " << kondisi_3 << "\n";

  std::cout << std::boolalpha;
  std::cout << "Kondisi bernilai : " << !kondisi_3 << "\n";

  std::cout << "Kondisi bernilai : " << int_bool_1 << "\n";
  std::cout << "Kondisi bernilai : " << int_bool_2 << "\n";

  
  return 0;
}

/**
 * Penggunaan iomanip dapat dilakukan untuk memanipulasi input dan output
 * Untuk output menggunakan statement std::cout
 * Untuk input menggunakan statement std::cin
*/