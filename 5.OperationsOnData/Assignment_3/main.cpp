// Assignment 3 - Area of box
#include <iostream>

int main()
{
    double length{}, width{}, height{};
    std::cout << "Welcome to the box calculator. Please type in length, width and height information : " << std::endl;
    std::cout << "length : ";
    std::cin >> length;
    std::cout << "width : ";
    std::cin >> width;
    std::cout << "height : ";
    std::cin >> height;
    double base_area = length * width;
    double volume    = base_area * height;
    std::cout << "The base area is : " << base_area << std::endl;
    std::cout << "The volume is : " << volume << std::endl;
    return 0;
}