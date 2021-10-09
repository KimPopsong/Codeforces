#include <iostream>

int main()
{
	int testCase;

	std::cin >> testCase;

	for (int i = 0; i < testCase; i++)
	{
		std::string str;

		std::cin >> str;

		if (str.length() <= 10)
		{
			std::cout << str << std::endl;
		}

		else
		{
			std::cout << str[0] << str.length() - 2 << str[str.length() - 1] << std::endl;
		}
	}

	return 0;
}
