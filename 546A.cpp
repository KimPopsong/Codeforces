#include <iostream>

int main()
{
	int firstBananaPrice, dollarsHave, bananaWant;
	int needToborrow = 0;
	double bananaPriceSum;

	std::cin >> firstBananaPrice >> dollarsHave >> bananaWant;

	bananaPriceSum = ((double)(bananaWant * (bananaWant + 1)) / 2) * firstBananaPrice;

	needToborrow = bananaPriceSum - dollarsHave;

	if (needToborrow <= 0)
	{
		std::cout << 0 << std::endl;
	}

	else
	{
		std::cout << needToborrow << std::endl;
	}

	return 0;
}
