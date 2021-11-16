#include <iostream>

int main()
{
	int friendNumber;
	int friendGaveGift[101] = { 0 };

	std::cin >> friendNumber;

	for (int i = 1; i <= friendNumber; i++)
	{
		std::cin >> friendGaveGift[i];
	}

	for (int friendIndex = 1; friendIndex <= friendNumber; friendIndex++)
	{
		for (int friendGiveIndex = 1; friendGiveIndex <= friendNumber; friendGiveIndex++)
		{
			if (friendIndex == friendGaveGift[friendGiveIndex])
			{
				std::cout << friendGiveIndex << " ";
			}
		}
	}

	std::cout << std::endl;

	return 0;
}
