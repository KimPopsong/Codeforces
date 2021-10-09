#include <iostream>

int main()
{
	int problemNumber;
	int sureSolution = 0;

	std::cin >> problemNumber;

	for (int i = 0; i < problemNumber; i++)
	{
		int p, v, t;

		std::cin >> p >> v >> t;

		if (p + v + t >= 2)
		{
			sureSolution += 1;
		}
	}

	std::cout << sureSolution << std::endl;

	return 0;
}
