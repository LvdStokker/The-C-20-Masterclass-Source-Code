// Assignment 2 - Celsius to Fahrenheit
#include <iostream>

int main()
{
    double celsius;
    std::cout << "Please enter a degree value in celsius : " << std::endl;
    std::cin >> celsius;
    double fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;
    return 0;
}