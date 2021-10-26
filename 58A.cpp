#include <iostream>

int main()
{
	std::string isHello;
	std::string hello = "hello";
	int helloNod = 0;

	std::cin >> isHello;

	for (int i = 0; i < isHello.length() && helloNod != 5; i++)
	{
		if (isHello[i] == hello[helloNod])
		{
			helloNod += 1;
		}
	}

	if (helloNod == 5)
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
