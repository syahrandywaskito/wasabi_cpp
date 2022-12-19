#include <iostream>
#include <cstdlib> // libary untuk return EXIT_SUCCESS dan EXIT_FAILURE

// tipe data string termasuk ke namespace std;
std::string greeting(){
	std::string greeting{"Hello, have a great day!"};
	return greeting; // akan mengembalikan nilai dari variabel greeting
}
// fungsi untuk menambah dua operand 
// argumen digunakan untuk mendeklarasikan variabel dan juga sebagai input
int tambah(int a, int b){
	return a + b;// menghasilkan kembalian berupa proses tambah
}

int main(){
	// output greeting function
	std::cout << greeting() << "\n"; // menampilkan nilai dari fungsi greeting()

	// variabel input operand
	int x{}, y{};
	std::cout << "input operand\n";
	std::cin >> x >> y;
	std::cout << x << " + " << y << " = " << tambah(x, y) << std::endl; // argumen dari fungsi tambah() adalah input
	return EXIT_SUCCESS; // sama dengan return 0
}