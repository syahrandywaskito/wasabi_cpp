#include <iostream>
using namespace std;

int main(){
	// variabel utama
	int awal = 0, akhir = 0;
	// input 
	cout << "Masukkan nilai awal = ";
	cin >> awal;
	cout << "Masukkan nilai akhir = ";
	cin >> akhir;
	// perulangan yang dupilih
	if (awal < akhir){
		// jika awal lebih kecil dari akhir 
		for (awal; awal <= akhir; ++awal){
		cout << awal << ", ";
		}
	}
	else if (awal > akhir){
		// jika awal lebih  besar dari akhir
		for (awal; awal >= akhir; --awal){
			cout << awal << ", ";
		}
	}
	// new line 
	cout << endl;
	return 0;
}