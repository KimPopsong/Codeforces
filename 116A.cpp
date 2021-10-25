#include <iostream>

int main()
{
	int n;
	int now = 0;
	int max = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int exit, enter;

		std::cin >> exit >> enter;

		now -= exit;
		now += enter;

		max = now > max ? now : max;
	}

	std::cout << max << std::endl;

	return 0;
}
