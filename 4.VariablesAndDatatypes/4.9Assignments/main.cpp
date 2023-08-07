#include <iostream>

int main()
{
    int var1{123}; // Declare and initialize
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var1 : " << var1 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    double var2{44.55}; // Declare and initialize
    std::cout << "var2 : " << var2 << std::endl;

    var2 = 99.99; // Assign
    std::cout << "var2 : " << var2 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------" << std::endl;

    std::cout << std::endl;
    bool state{false}; // Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;

    state = true; // Assign

    std::cout << "state : " << state << std::endl;

    // Auto type deduction
    // Careful about auto assignments
    // Be careful with auto in general
    auto var3{333u}; // Declare and initialize with type deduction

    var3 = -22; // Assign negative number. DANGER! --> will not get an error, instead we will get overflow and value
                // will wrap = 4294967274

    std::cout << "var3 : " << var3 << std::endl;

    var3 = -1;
    std::cout << "var3 : " << var3 << std::endl; // 4 294 967 295 = 0xFFFFFFFF

    return 0;
}