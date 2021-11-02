#include <iostream>
#include <algorithm>

int main()
{
	int coinNumber, coinSum = 0, coinTake = 0, coinTakeCount = 0;;
	int coin[100] = { 0 };

	std::cin >> coinNumber;

	for (int i = 0; i < coinNumber; i++)
	{
		std::cin >> coin[i];

		coinSum += coin[i];
	}

	std::sort(coin, coin + coinNumber);

	for (int i = coinNumber - 1; i >= 0; i--)
	{
		coinTake += coin[i];
		coinSum -= coin[i];
		coinTakeCount += 1;

		if (coinTake > coinSum)
		{
			break;
		}
	}

	std::cout << coinTakeCount << std::endl;

	return 0;
}
