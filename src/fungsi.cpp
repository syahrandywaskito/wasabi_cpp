#include <iostream>
#include <cstdlib> // libary untuk return EXIT_SUCCESS dan EXIT_FAILURE
using namespace std;

// tipe data string termasuk ke namespace std;
string greeting(){
	string greeting{"Hello, have a great day!"};
	return greeting; // akan mengembalikan nilai dari variabel greeting
}
// fungsi untuk menambah dua operand 
// argumen digunakan untuk mendeklarasikan variabel dan juga sebagai input
int tambah(int a, int b){
	return a + b;// menghasilkan kembalian berupa proses tambah
}

int main(){
	// output greeting function
	cout << greeting() << "\n"; // menampilkan nilai dari fungsi greeting()

	// variabel input operand
	int x{}, y{};
	cout << "input operand\n";
	cin >> x >> y;
	cout << x << " + " << y << " = " << tambah(x, y) << endl; // argumen dari fungsi tambah() adalah input
	return EXIT_SUCCESS; // sama dengan return 0
}