#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0)
    {
        std::cout << "Invalid age\n";
    }
    else if (age >= 18)
    {
        std::cout << "You are an adult\n";
    }
    else
    {
        std::cout << "You are a minor\n";
    }

    std::cout << "Hello " << name << ", you are " << age
        << " years old.\n";

    return 0;
}