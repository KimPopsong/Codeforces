#include <iostream>
#include <string>

int main()
{
	std::string string1;

	std::cin >> string1;

	for (int i = 0; i < string1.length(); i++)
	{
		string1[i] = tolower(string1[i]);

		switch (string1[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
			string1[i] = '.';

		defalut:
			continue;
		}
	}

	for (int i = 0; i < string1.length(); i++)
	{
		if (string1[i] != '.')
		{
			std::cout << '.' << string1[i];
		}
	}
	std::cout << std::endl;

	return 0;
}
