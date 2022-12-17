#include <iostream>
using namespace std;

// fungsi void tanpa mengembalikan nilai
void fungsivoid(){
	char answer{};
	cout << "\n";
	cout << "Statement yang ada dalam fungsi void\n";
	cout << "tekan y untuk menampilkan Output, n untuk tidak menampilkan Output : ";
	cin >> answer;
	if (answer == 'n' || answer == 'N'){
		return;
	}
	else{
		cout << "Output\n";	
	}
	cout << "\n";
}

// fungsi input nilai integer
int inputInt(){
	// variable input
	int input{};
	cout << "Input nilai integer(bilangan bulat) : ";
	cin >> input;
	return input; // akan mengembalikan nilai input ke fungsi caller
}

// fungsi input nilai character
char inputChar(){
	// variable input
	char input{};
	cout << "Input nilai Character(bilangan huruf/non-huruf tunggal) : ";
	cin >> input;
	return input; 
}

int main(int argc, char const *argv[]){
	
	// variabel yang menampung return value dari fungsi
	int dataInt1{inputInt()};
	int dataInt2{inputInt()};
	char dataChar{inputChar()};

	// Output statement
	// fungsivoid();
	cout << "Nilai dari input pertama : " << dataInt1 << "\n";
	cout << "Nilai dari input kedua : " << dataInt2 << "\n";
	cout << "NIlai dari fungsi inputChar() data Character : " << dataChar << endl; 

	return 0;
}