// Assignment 1 - The program wants to know where you live
#include <iostream>
#include <string>

int main()
{
    std::string country;
    std::cout << "Where do you live?" << std::endl;
    // For single word country
    // std::cin >> country;
    // For countries with more than one word e.g. South Africa
    std::getline(std::cin, country);
    std::cout << "I've heard great things about " << country << ". I'd like to go sometime.";

    return 0;
}