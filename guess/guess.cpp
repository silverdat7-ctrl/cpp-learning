#include <iostream>

int main() 
{
	int secret = 50;
	while (true)
	{
		int guess;
		std::cout << "Guess the secret number (between 1 and 100): ";
		std::cin >> guess;

		if (guess == secret)
		{
			std::cout << "Correct!\n";
			break;
		}
		else if (guess < secret)
		{
			std::cout << "Too low!\n";
		}
		else
		{
			std::cout << "Too high!\n";
		}
	}

	return 0;

}