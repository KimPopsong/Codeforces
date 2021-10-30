#include <iostream>
#include <algorithm>

int main()
{
	std::string str;
	std::string reversedStr;

	std::cin >> str;
	std::cin >> reversedStr;

	std::reverse(str.begin(), str.end());

	if (str == reversedStr)
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
