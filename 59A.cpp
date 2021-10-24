#include <iostream>

int main()
{
	int upCount = 0, loCount = 0;
	std::string str;

	std::cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			upCount += 1;
		}

		else
		{
			loCount += 1;
		}
	}

	if (upCount > loCount)
	{
		for (int i = 0; i < str.length(); i++)
		{
			std::cout << char(std::toupper(str[i]));
		}
	}

	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			std::cout << char(std::tolower(str[i]));
		}
	}

	std::cout << std::endl;

	return 0;
}
