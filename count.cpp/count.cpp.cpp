#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
        sum += i;
    }

    std::cout << "\nSum: " << sum << "\n";

    return 0;
}