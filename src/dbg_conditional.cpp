/**
 * DEBUG LESSON "Conditionalized debug"
 * Conditionalized debug menggunakan bantuan prepocessor untuk penerapannya
 * Propocessor yang digunakan adalah #define #ifdef dan #endif 
 * Fungsi dari #define adalah untuk mendeklarasikan identifier untuk conditional prepocessor
 * #ifdef dan #endif berperan sebagai conditional preprocessornya
 * Jika ingin mengenable dan disable debug-nya hanya dengan mengcommenting out #define-nya
*/


#include <iostream>

// jika #define dicommenting out maka debug akan disable
#define DEBUG_COMPONEN

int multiplied(int num1, int num2);
int input();

int main(int argc, char const *argv[]){

    int num1 {input()};
    int num2 {input()};

#ifdef DEBUG_COMPONEN
std::cerr << "num1 : " << num1 << "\nnum2 : " << num2 << "\n";
#endif

    std::cout << multiplied(num1, 4) << std::endl;

    return 0;
}

int multiplied(int num1, int num2){

#ifdef DEBUG_COMPONEN
std::cerr << "input num1 = " << num1 << "\n";
std::cerr << "input num2 = " << num2 << "\n";
#endif

    return num1 * num2;   
}

int input(){
    int num{};
    std::cout << "input : "; std::cin >> num;
    return num;
}
