#include <iostream>

int main()
{
	int row, col;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int temp;

			std::cin >> temp;

			if (temp)
			{
				row = i;
				col = j;
			}
		}
	}

	row = row - 2 >= 0 ? row - 2 : 2 - row;
	col = col - 2 >= 0 ? col - 2 : 2 - col;

	std::cout << row + col << std::endl;

	return 0;
}
