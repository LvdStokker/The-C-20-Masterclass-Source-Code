#include <iostream>

int main()
{
    // Compile time error (missing semi-colon will simulate this)
    std::cout << "Hello Word!" << std::endl;

    // Run time error - program crashes
    // Funny enough the division itself will not be a problem, it is when we
    // try capture the result of the division
    int value = 7 / 0; // Some compilers will warn you about this
    /*
        - GCC and Clang just warns you and will let this run
        - MSVC will not build
    */
    // Did not print, but did not see any puke either
    std::cout << "value : " << value << std::endl;

    return 0;
}