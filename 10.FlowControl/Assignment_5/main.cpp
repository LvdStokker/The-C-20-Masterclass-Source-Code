// Assignment 5 - Treatment
#include <iostream>

int main()
{
    int age{};
    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;
    if (age > 39)
    {
        std::cout << "Sorry you are too old for the treatment";
    }
    else if (age < 21)
    {
        std::cout << "Sorry, you are too young for the treatment";
    }
    else
    {
        std::cout << "You are eligable for the treatment";
    }
    return 0;
}