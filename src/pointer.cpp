#include <iostream>
#include <string>
#include <typeinfo>

int main(int argc, char const *argv[])
{
  std::string nama {"Wasabi Hamada"};
  short age {19}, *age_ptr {&age};

  // alamat variable hanya bisa dimasukkan ke pointer*
  std::string* nama_ptr {&nama}; 
 
  std::cout << "Nama : " << nama << '\n';

  std::cout << "Alamat variabel nama : " << &nama << '\n';
  std::cout << "Pointer variabel nama : " << nama_ptr << '\n';
  std::cout << "Pointer size : " << sizeof(nama_ptr) << '\n'; 
  std::cout << "String nama size : " << sizeof(nama) << '\n'; 
  std::cout << "tipe data pointer : " << typeid(nama_ptr).name() << '\n'; 

  return 0;
}
