#include <iostream>

int main()
{
	int magnetNumber;
	int groupNumber = 1;
	int magnet[100000] = { 0 };

	std::cin >> magnetNumber;

	for (int i = 0; i < magnetNumber; i++)
	{
		std::cin >> magnet[i];
	}

	for (int i = 0; i < magnetNumber - 1; i++)
	{
		if (magnet[i] != magnet[i + 1])
		{
			groupNumber += 1;
		}
	}

	std::cout << groupNumber << "\n";

	return 0;
}
