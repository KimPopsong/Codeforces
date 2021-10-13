#include <iostream>
#include <string>  // To use "tolower"

int main()
{
	std::string str1, str2;

	std::cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++)
	{
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
	}

	if (str1 > str2)
	{
		std::cout << 1 << std::endl;
	}

	else if (str1 < str2)
	{
		std::cout << -1 << std::endl;
	}

	else
	{
		std::cout << 0 << std::endl;
	}

	return 0;
}
