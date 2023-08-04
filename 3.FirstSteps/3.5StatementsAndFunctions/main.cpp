#include <iostream>

// Functions are reusable blocks of code that group together bunches of statements
int add_numbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}
// Course - make function that multiplies two numbers
int mult_numbers(int first_param, int second_param)
{
    int result = first_param * second_param;
    return result;
}

int main()
{
    int first_number{13}; // Statement - most basic unit of computation
    int second_number{7};

    std::cout << "First number : " << first_number << std::endl;   // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = add_numbers(25, 7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = add_numbers(30, 54);
    std::cout << "Sum : " << sum << std::endl; // 84

    std::cout << "Sum : " << add_numbers(3, 42) << std::endl; // 45

    // Course - make function that multiplies two numbers
    std::cout << "Multiplication : " << mult_numbers(3, 20) << std::endl; // 60


    return 0;
}