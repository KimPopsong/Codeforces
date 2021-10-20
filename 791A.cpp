#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int limak, bob;
	int count = 0;

	std::cin >> limak >> bob;

	while (true)
	{
		count++;

		limak *= 3;
		bob *= 2;

		if (limak > bob)
		{
			std::cout << count << "\n";

			break;
		}
	}

	return 0;
}
