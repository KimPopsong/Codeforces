#include <iostream>

int main()
{
	int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2)  // If odd
		{
			std::cout << "I hate ";
		}

		else  // If even
		{
			std::cout << "I love ";
		}

		if (i == n)
		{
			std::cout << "it";
		}

		else
		{
			std::cout << "that ";
		}
	}

	std::cout << "\n";

	return 0;
}
