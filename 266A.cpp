#include <iostream>

int main()
{
	int stoneCount, takeCount = 0;
	std::string stone;

	std::cin >> stoneCount;
	std::cin >> stone;

	for (int i = 0; i < stoneCount - 1; i++)
	{
		if (stone[i] == stone[i + 1])
		{
			takeCount += 1;
		}
	}

	std::cout << takeCount << std::endl;

	return 0;
}
