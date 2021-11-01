#include <iostream>

int main()
{
	int gameCount;
	int antonWin = 0, danikWin = 0;

	std::cin >> gameCount;

	for (int i = 0; i < gameCount; i++)
	{
		char temp;

		scanf(" %1c", &temp);

		if (temp == 'A')
		{
			antonWin += 1;
		}

		else
		{
			danikWin += 1;
		}
	}

	if (antonWin > danikWin)
	{
		std::cout << "Anton";
	}

	else if (antonWin < danikWin)
	{
		std::cout << "Danik";
	}

	else
	{
		std::cout << "Friendship";
	}

	std::cout << std::endl;

	return 0;
}
