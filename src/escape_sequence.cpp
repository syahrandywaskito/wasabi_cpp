#include <iostream>

int main(int argc, char const *argv[])
{
  // escape sequences
  std::cout << "\n\t------------Escape Sequences-----------\n";
  std::cout << "\t+-----------------+-------------------+\n";
  std::cout << "\t| Escape Sequence |       Meaning     |\n";
  std::cout << "\t+-----------------+-------------------+\n";
  std::cout << "\t|       \\a        | Alert (beep)      |\n";
  std::cout << "\t|       \\b        | Backspace         |\n";
  std::cout << "\t|       \\f        | Formfeed          |\n";
  std::cout << "\t|       \\n        | Newline           |\n";
  std::cout << "\t|       \\r        | Carriage Return   |\n";
  std::cout << "\t|       \\t        | Horizontal tab    |\n";
  std::cout << "\t|       \\v        | Vertical tab      |\n";
  std::cout << "\t|       \\'        | Single Quote      |\n";
  std::cout << "\t|       \\\"        | Double Quote      |\n";
  std::cout << "\t|       \\\\        | Backslash         |\n";
  std::cout << "\t|       \\?        | Question Mark     |\n";
  std::cout << "\t|   \\(number)     | Octal Number      |\n";
  std::cout << "\t|   \\x(number)    | Hexadecimal Number|\n";
  std::cout << "\t+-----------------+-------------------+\n";

  return 0;
}
