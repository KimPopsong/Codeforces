#include <iostream>
#include <cmath>

int main()
{
	double maxNumber, location;
	double number;

	std::cin >> maxNumber >> location;

	if (std::ceil(maxNumber / 2) >= location)  // If odd
	{
		number = location * 2 - 1;
	}

	else  // If even
	{
		number = (location - std::ceil(maxNumber / 2)) * 2;
	}

	std::cout << std::fixed;
	std::cout.precision(0);

	std::cout << number << "\n";
	
	return 0;
}
