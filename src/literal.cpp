/**
 *  Literal
 * 
*/

#include <iostream>
#include <cstddef>



int main(int argc, char const *argv[])
{
  std::cout << "Unsigned Int : " << -1U << '\n';
  std::cout << "Unsigned Int : " << 1U << '\n';
  std::cout << "Unsigned Int : " << -1 << '\n';

  std::size_t integral_number{4};

  std::cout << "size using size_t : " << sizeof(integral_number) << '\n';
  return 0;
}
