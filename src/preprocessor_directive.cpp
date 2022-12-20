/**
 * Program C++ mengenai Preprocessor Directive
 * Propocessor Directive yang dibahas adalah
 * 
 * #include : memasukkan file ke dalam file lain
 * #define : mendefinisikan sebuah indetifier dan juga subtitution_text -nya
 * #ifdef : kondisi percabangan jika identifier di definisikan
 * #ifndef : kondisi percabangan jika identifier tidak di definisikan
 * #if 0 : kondisi dimana block code tidak dikompilasi
 * #endif : batas akhir dari kondisi
*/

#include <iostream> // contoh dari #include

// define mendefinisikan MY_HOBBY
#define MY_HOBBY "Playing Game"


int main(int argc, char const *argv[])
{
    #ifdef MY_HOBBY // MY_HOBBY didefinisikan maka cout dijalankan
     std::cout << "My hobby is : " << MY_HOBBY << "\n";
    #endif

    #ifndef MY_HOME // MY_HOME tidak didefinisikan maka cout akan dijalankan
     std::cout << "No, you don't ask\n";
    #endif

    #if 0
     std::cout << "Not Compile\n";
    #endif

    return 0;
}
