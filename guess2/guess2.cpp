#include <iostream>

int main()
{
	int sum = 0;
	while (true)
	{
		int n;
		std::cout << "Enter a number (0 to exit): ";
		std::cin >> n;

		if (n == 0)
		{
			break;
		}

		sum += n;
	}

	std::cout << "Sum" << sum << "\n";
	
	return 0;
}