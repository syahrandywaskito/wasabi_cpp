#include <iostream>
using namespace std;

// fungsi yang ada di file terpisah 
int input();

int main(int argc, char const *argv[])
{
	int num{input()};

	cout << "Hasil input dari file terpisah : " << num << endl;
	return 0;
}

