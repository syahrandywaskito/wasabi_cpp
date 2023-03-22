/**
 * SIGNED AND UNSIGNED INTEGER
 * SIGNED int dapat menampung nilai positif dan negatif
 * UNSIGNED int hanya dapat menampung nilai positif
 * 3-Maret-2023
*/

#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{

  // size of signed int 
  std::string type{};
  std::cout << "Input Data Type : "; std::cin >> type;

  int result_all{}, result_start{}, result_end{};

  if (type == "short")
  {
    int short_size = sizeof(short);
    int bit_size = 8 * short_size;
    int short_range_all = pow(2, bit_size);
    int short_range_start = -(pow(2, bit_size - 1));
    int short_range_end = pow(2, bit_size - 1) - 1;
    result_all = short_range_all;
    result_start = short_range_start;
    result_end = short_range_end;
  }
  else if (type == "un_short")
  {
    int data_size = sizeof(unsigned short);
    int bit_size = 8 * data_size;
    int data_range_all = pow(2, bit_size);
    int data_range_start {0};
    int data_range_end = pow(2, bit_size) - 1;
    result_all = data_range_all;
    result_start = data_range_start;
    result_end = data_range_end;
  }
  else{
    std::cout << "Please re-check the typing\n";
  }

  std::cout << type << " range all is : " << result_all << "\n";
  std::cout << type << " range start : " << result_start << " to " << result_end << std::endl;
  return 0;
}

/**
 * rumus untuk sign dan unsign
 * rumus range all : 2^n (n = jumlah bit tipe data)
 * rumus range signed : -2^n-1 to (2^n-1)-1
 * rumus range unsigned : 0 to (2^n)-1 
*/