#include <iostream>
#include <cmath>

int main()
{
	int groupNumber;
	int group[5] = { 0 };
	int taxiNeed = 0;

	std::cin >> groupNumber;

	for (int i = 0; i < groupNumber; i++)
	{
		int temp;

		std::cin >> temp;

		group[temp] += 1;
	}

	taxiNeed += group[4];

	if (group[3] >= group[1])
	{
		taxiNeed += group[3];

		group[1] = 0;
	}

	else
	{
		group[1] -= group[3];

		taxiNeed += group[3];
	}

	taxiNeed += (group[2] / 2);

	group[2] %= 2;

	if (group[2])
	{
		taxiNeed += 1;

		group[1] -= 2;
	}

	if (group[1])
	{
		taxiNeed += ceil(double(group[1]) / 4);
	}
	
	std::cout << taxiNeed << "\n";

	return 0;
}
