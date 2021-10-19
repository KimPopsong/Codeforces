#include <iostream>

int main()
{
	int count;
	int xSum = 0, ySum = 0, zSum = 0;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int x, y, z;

		std::cin >> x >> y >> z;

		xSum += x;
		ySum += y;
		zSum += z;
	}

	if (xSum == 0 && ySum == 0 && zSum == 0)
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
