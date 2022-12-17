/*
	subtask cpp funtion
	Logika bahwa fungsi harus menajalankan tugas tidak lebih 
	
*/

#include <iostream>
#include <cstdlib>
using namespace std;


// fungsi untuk input data, calculated data, output data
int input();
int calculated(int x, int y);
int output(int hasil);


int main(int argc, char const *argv[])
{
	// value variabel dari fungsi
	int x{input()}, y{input()};
	
	// output
	cout << "Hasil calculated : " << output(calculated(x, y)) << endl;
	return EXIT_SUCCESS;
}

int input(){
	cout << "Masukkan data!\n";
	int num{};
	cout << "> "; cin >> num;
	return num;
}

int calculated(int x, int y){
	int hasil{};
	hasil = x + y;
	return hasil;
}

int output(int hasil){
	return hasil;
}