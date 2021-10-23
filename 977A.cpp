#include <iostream>

int main()
{
	int num, count;

	std::cin >> num >> count;

	for (int i = 0; i < count; i++)
	{
		if (num % 10)
		{
			num -= 1;
		}

		else 
		{
			num /= 10;
		}
	}

	std::cout << num << std::endl;

	return 0;
}
