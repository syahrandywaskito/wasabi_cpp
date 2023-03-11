#include "size.h"
#include <iostream>

int size(std::string data_type){
  
  int data_size{};

  if (data_type == "int")
  {
    std::cout << "Integer size : " << sizeof(int) << " byte\n";
    data_size = sizeof(int);
  }
  else if (data_type == "short")
  {
    std::cout << "Float size " << sizeof(short) << " byte\n";
    data_size = sizeof(short);
  }
  else if (data_type == "float")
  {
    std::cout << "Float size " << sizeof(float) << " byte\n";
    data_size = sizeof(float);
  }
  else if (data_type == "double")
  {
    std::cout << "Double size " << sizeof(double) << " byte\n";
    data_size = sizeof(double);
  }
  else if (data_type == "long")
  {
    std::cout << "Long size " << sizeof(long) << " byte\n";
    data_size = sizeof(long);
  }
  else if (data_type == "long_double")
  {
    std::cout << "Long Double size " << sizeof(long double) << " byte\n";
    data_size = sizeof(long double);
  }
  else if (data_type == "char")
  {
    std::cout << "Char size " << sizeof(char) << " byte\n";
    data_size = sizeof(char);
  }
  else if (data_type == "wchar_t")
  {
    std::cout << "Wchar_t size " << sizeof(wchar_t) << " byte\n";
    data_size = sizeof(wchar_t);
  }
  else if (data_type == "char16_t")
  {
    std::cout << "Char16_t size " << sizeof(char16_t) << " byte\n";
    data_size = sizeof(char16_t);
  }
  else if (data_type == "char32_t")
  {
    std::cout << "Char32_t size " << sizeof(char32_t) << " byte\n";
    data_size = sizeof(char32_t);
  }
  else if (data_type == "bool")
  {
    std::cout << "Float size " << sizeof(bool) << " byte\n";
    data_size = sizeof(bool);
  }

    return data_size;
}