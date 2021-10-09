#include <iostream>

int main()
{
	int participantsNumber, scoreCut;
	int participants[100] = { 0 };
	int participantsNextLevel = 0;

	std::cin >> participantsNumber >> scoreCut;

	for (int i = 0; i < participantsNumber; i++)
	{
		std::cin >> participants[i];
	}

	scoreCut = participants[scoreCut - 1];

	for (int i = 0; i < participantsNumber; i++)
	{
		if (participants[i] == 0)
		{
			break;
		}

		else if (participants[i] >= scoreCut)
		{
			participantsNextLevel += 1;
		}

		else
		{
			break;
		}
	}

	std::cout << participantsNextLevel << std::endl;

	return 0;
}
