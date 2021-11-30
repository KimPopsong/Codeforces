#include <iostream>
#include <cmath>

int main()
{
	long long n;
	long long sum = 0;
	
	std::cin >> n;

	if (n % 2)  // If n is odd
	{
		sum += (n / 2) - n;
	}

	else  // If n is even
	{
		sum = n / 2;
	}

	std::cout << sum << std::endl;

	return 0;
}
