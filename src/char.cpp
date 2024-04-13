/**
 * Program untuk mengetahui ASCII CODE dari setiap Char
 * Command / Input :
 * 0 = Untuk menampilkan semua list ASCII CODE dari 0 - 127
 * Karakter Keyboard : menampilkan ASCII CODE nya langsung, 
 * contohnya jika kita input v, maka akan tampil
 * Char       ASCII CODE
 * V          86
 * 
 * 
 * Core dari program ini adalah penggunaan static_cast yang 
 * berfungsi untuk merubah char ke ASCII maupun sebaliknya 
 * semua program ini hanya berkutat pada proses konversi char ke ASCII
 * dan sebaliknya
*/

#include <iostream>

int main(int argc, char const *argv[])
{
  // header 
  std::cout << "\t----------ASCII CODE & SYMBOL----------\n";

  std::cout << "\nInput Char Symbol !!!\n";

  // input
  char char_symbol{};
  std::cout << "\nChar Symbol : "; std::cin >> char_symbol;

  // show all symbol statement
  if (char_symbol == '0')
  {
    std::cout << "\nCommand 0/ALL (print ALL character)\n";
    std::cout << "ASCII Code" << "\tSymbol\n";
    for (int count = 0; count <= 127; count++)
    {
      // variabel count disini digunakan untuk list dan perubah ke dari ASCII ke char
      char ascii_code{static_cast<char>(count)};

      // count kurang dari 31 akan masuk ke kategori unprintable char
      if (count <= 31)
      {
        std::cout << count << "*" << "\t\t" << ascii_code << '\n';     
      
      }
      else
      {
        std::cout << count << "\t\t" << ascii_code << '\n';
      }
      
    }
    std::cout << "\n* : Unprintable Char\n";
  }

  // single symbol statement
  else
  {
    // jika bukan 0 maka masukkan char yang kemudian di convert menjadi ASCII
    std::cout << "Char Symbol" << "\tASCII Code\n";
    std::cout << char_symbol << "\t\t" << static_cast<int>(char_symbol) << '\n';
  }
  
  // char ch{};
  // std::cout << "Input char\n";
  // std::cin >> ch;
  // std::cout << "Entered : " << ch << '\n';

  // std::cin >> ch;
  // std::cout << "Entered : " << ch << '\n';
  return 0;
}
