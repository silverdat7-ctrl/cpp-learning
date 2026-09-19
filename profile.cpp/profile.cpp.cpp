#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string city;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Enter your city: ";
    std::getline(std::cin, city);

    std::cout << "Hello " << name << ", you are " << age
        << " years old and live in " << city << ".\n";

    return 0;
}