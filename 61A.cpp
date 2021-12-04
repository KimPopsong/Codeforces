#include <iostream>

int main()
{
	std::string binary1, binary2;

	std::cin >> binary1 >> binary2;

	for (int i = 0; i < binary1.length(); i++)
	{
		if (binary1[i] + binary2[i] == 97)
		{
			std::cout << 1;
		}

		else
		{
			std::cout << 0;
		}
	}

	std::cout << "\n";

	return 0;
}
