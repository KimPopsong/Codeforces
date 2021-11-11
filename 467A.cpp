#include <iostream>

int main()
{
	int roomNumber;
	int availRoomNumber = 0;

	std::cin >> roomNumber;

	for (int i = 0; i < roomNumber; i++)
	{
		int liveNow, liveAvail;

		std::cin >> liveNow >> liveAvail;

		if (liveAvail - liveNow >= 2)
		{
			availRoomNumber += 1;
		}
	}

	std::cout << availRoomNumber << "\n";

	return 0;
}
