// Assignment 4 - Even or Odd
#include <iostream>

int main()
{
    int number{};
    std::cout << "Please type in an integral value : " << std::endl;
    std::cin >> number;
    if (number % 2)
    {
        std::cout << number << " is odd";
    }
    else
    {
        std::cout << number << " is even";
    }
    return 0;
}