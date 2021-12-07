#include <iostream>

int main()
{
	int juiceNumber;
	double juiceSum = 0;

	std::cin >> juiceNumber;

	for (int i = 0; i < juiceNumber; i++)
	{
		int temp;

		std::cin >> temp;

		juiceSum += temp;
	}

	std::cout << std::fixed;
	std::cout.precision(12);

	std::cout << juiceSum / juiceNumber << "\n";

	return 0;
}
