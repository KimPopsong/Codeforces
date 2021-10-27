#include <iostream>
#include <cstring>

int main()
{
	int stringSize, time;
	char str[51] = { 0 };

	std::cin >> stringSize >> time;

	for (int i = 0; i < stringSize; i++)
	{
		scanf(" %1c", &str[i]);
	}

	for (int i = 0; i < time; i++)
	{
		char strTemp[51] = { 0 };

		for (int j = 0; j < stringSize; j++)
		{
			if (str[j] == 'B' && j != stringSize - 1)
			{
				if (str[j + 1] == 'G')
				{
					strTemp[j] = 'G';
					strTemp[j + 1] = 'B';

					j += 1;

					continue;
				}
			}

			strTemp[j] = str[j];
		}

		strcpy(str, strTemp);
	}

	for (int i = 0; i < stringSize; i++)
	{
		std::cout << str[i];
	}

	std::cout << std::endl;

	return 0;
}
