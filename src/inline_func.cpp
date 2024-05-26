#include <iostream>

// inline function tidak akan berguna pada compiler modern

// inline int min(int x, int y)
// {
//   return x < y ? x : y;
// }

// penggunaan inline pada function yang didefinisi tidak akan berpengaruh saat proses compile
int min(int x, int y)
{
  return x < y ? x : y;
}


int main()
{
  
  // std::cout << min(4, 2) << '\n';
  std::cout << (( 4 < 2 ) ? 4 : 2 ) << '\n';

  return 0;
}
