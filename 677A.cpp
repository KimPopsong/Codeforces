#include <iostream>

int main()
{
	int friendNumber, fenceHeight;
	int needWidth = 0;

	std::cin >> friendNumber >> fenceHeight;

	for (int i = 0; i < friendNumber; i++)
	{
		int friendHeight;

		std::cin >> friendHeight;

		if (friendHeight > fenceHeight)
		{
			needWidth += 2;
		}

		else
		{
			needWidth += 1;
		}
	}

	std::cout << needWidth << std::endl;

	return 0;
}
