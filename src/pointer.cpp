#include <iostream>
#include <string>
#include <typeinfo>

void tambahScore(int* score);
int kurangiScore(int score);

int main(int argc, char const *argv[])
{
  // penulisan langsung variabel beserta alamat di pointer
  std::string nama {"Wasabi Hamada"}, *nama_ptr {&nama};
  short age {19}, *age_ptr {&age};
  // float* float_age_ptr {&age};
  int score {};
 
  // *age_ptr = 20;
  // short umur {20};
  // age_ptr = &umur;

  // std::cout << "Score awal : " <<  score << '\n';

  std::cout << age_ptr << " | " << *age_ptr << '\n';

  std::cout << "Nama : " << nama << '\n';

  std::cout << "Alamat variabel nama : " << &nama << '\n';

  // pointer tanpa * akan menampilkan alamat variabel, jika dengan * maka value dari alamat yang ditampilkan
  std::cout << "Pointer variabel nama : " << nama_ptr << " | " << *nama_ptr << '\n';
  std::cout << "Pointer size : " << sizeof(nama_ptr) << '\n'; 
  std::cout << "String nama size : " << sizeof(nama) << '\n'; 
  std::cout << "tipe data pointer : " << typeid(nama_ptr).name() << '\n'; 

  std::cout << "Alamat dari Pointer nama : " << &nama_ptr << " | " << nama_ptr << " | " << *nama_ptr << '\n';

  // std::cout << float_age_ptr << '\n';

  for (short i = 1; i <= 10; i++)
  {
    tambahScore(&score);
  }
  
  short score_saat_ini = score;
  std::cout << "Score saat ini : " << score_saat_ini << '\n';

  // for (short i = score_saat_ini; i > 0 ; i-=10)
  // {
  //   std::cout << "Score " << i << " - 10 : " << kurangiScore(i) << '\n';
  // }
  
  
  return 0;
}


void tambahScore(int* score)
{
  *score = *score + 10;
}

int kurangiScore(int score)
{
  return score - 10;
}