#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int year;

	std::cin >> year;

	while (true)
	{
		bool number[10] = { false };
		bool flag = true;
		int temp;

		year += 1;
		temp = year;

		while (temp)
		{
			if (number[temp % 10])
			{
				flag = false;

				break;
			}

			else
			{
				number[temp % 10] = true;

				temp /= 10;
			}
		}

		if (flag)
		{
			std::cout << year << "\n";

			break;
		}
	}

	return 0;
}
