#include <iostream>

int main()
{
	bool flag = false;
	int number;

	std::cin >> number;

	for (int i = 0; i < number; i++)
	{
		int isHard;

		std::cin >> isHard;

		if (isHard)
		{
			flag = true;
		}
	}

	if (flag)
	{
		std::cout << "HARD" << std::endl;
	}

	else
	{
		std::cout << "EASY" << std::endl;
	}

	return 0;
}
