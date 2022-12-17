#include <iostream>

class House
{
public:
	int room{};
	
};

int main(int argc, char const *argv[])
{
	// object untuk class House
	House rinaHouse;

	// insert data to property
	rinaHouse.room = 2;

	// output
	std::cout << "Room in rina house = " << rinaHouse.room << "\n";

	return 0;
}