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
      char ascii_code{(char)count};
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
    std::cout << "Char Symbol" << "\tASCII Code\n";
    std::cout << char_symbol << "\t\t" << int(char_symbol) << '\n';
  }
  
  // char ch{};
  // std::cout << "Input char\n";
  // std::cin >> ch;
  // std::cout << "Entered : " << ch << '\n';

  // std::cin >> ch;
  // std::cout << "Entered : " << ch << '\n';
  return 0;
}
