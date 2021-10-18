#include <iostream>
#include <algorithm>

int main()
{
	std::string footballPlayer;
	bool flag = false;
	int zeroCount = 0, oneCount = 0;

	std::cin >> footballPlayer;

	for (int i = 0; i < footballPlayer.length(); i++)
	{
		if (footballPlayer[i] == '1')
		{
			zeroCount = 0;
			oneCount += 1;
		}

		else
		{
			zeroCount += 1;
			oneCount = 0;
		}

		if (zeroCount >= 7 || oneCount >= 7)
		{
			flag = true;

			break;
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
