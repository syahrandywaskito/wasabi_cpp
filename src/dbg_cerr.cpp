/**
 * DEBUG LESSON "std::cerr"
 * std::cerr merupakan sebuah statement dari namespace std.
 * Fungsi dari cerr biasanya digunakan untuk membedakan sebuah output.
 * Output yang dibedakan adalah output untuk proses debug. 
 * Penulisan std::cerr tanpa indentasi pada sebuah fungsi.
 * 
 * "PROGRAM AKAN DIBIARKAN SALAH"
*/


#include <iostream>

int multiplied(int num1, int num2);
int input();

int main(int argc, char const *argv[]){

    int num1 {input()};
    int num2 {input()};

// std::cerr digunakan untuk proses debug
std::cerr << "num 1 : " << num1 << ", num2 : " << num2 << "\n";

    std::cout << "result = " << multiplied(num1, 4) << std::endl;

    return 0;
}

int multiplied(int num1, int num2){

// std::cerr << "\nmultiplied num1 : " << num1 << ", multiplied num2 : " << num2 << "\n";
    return num1 * num2;   
}

int input(){
    int num{};
    std::cout << "input : "; std::cin >> num;
    return num;
}
