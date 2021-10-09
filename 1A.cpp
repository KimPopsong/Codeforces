#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long width, length, stone;
	long long stoneX, stoneY;

	cin >> width >> length >> stone;

	stoneX = width / stone;
	stoneY = length / stone;

	if (width % stone != 0)
	{
		stoneX += 1;
	}

	if (length % stone != 0)
	{
		stoneY += 1;
	}

	cout << stoneX * stoneY << endl;

	return 0;
}		
