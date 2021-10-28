#include <iostream>

int main()
{
	int luckyCount = 0;
	std::string number;

	std::cin >> number;

	for (int i = 0; i < number.length(); i++)
	{
		if (number[i] == '4' || number[i] == '7')
		{
			luckyCount++;
		}
	}

	if (luckyCount == 4 || luckyCount == 7)
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
