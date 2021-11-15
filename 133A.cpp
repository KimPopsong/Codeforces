#include <iostream>

int main()
{
	bool flag = false;

	std::string command;

	std::cin >> command;

	for (int i = 0; i < command.length(); i++)
	{
		switch (command[i])
		{
		case 'H':
		case 'Q':
		case '9':
			flag = true;
			break;
			
		default:
			continue;
		}
	}

	if (flag)
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
