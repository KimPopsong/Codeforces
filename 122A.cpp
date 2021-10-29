#include <iostream>

int main()
{
	int n;
	int luckyNumbers[] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
	bool flag = false;

	std::cin >> n;

	for (auto i : luckyNumbers)
	{
		if (n % i == 0)
		{
			std::cout << "YES" << std::endl;

			return 0;
		}
	}

	std::cout << "NO" << std::endl;

	return 0;
}
