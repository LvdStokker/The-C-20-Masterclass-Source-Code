#include <iomanip>
#include <iostream>
// Testing includes to check NaN and infinity
#include <cmath>

// Luke Testing:
void check_inf_nan(double number)
{
    if (std::isinf(number) && std::signbit(number))
    {
        std::cout << "The number is negative infinity.\n";
    }
    else if (std::isinf(number) && !std::signbit(number))
    {
        std::cout << "The number is positive infinity.\n";
    }
    else if (std::isnan(number))
    {
        std::cout << "The number is NaN.\n";
    }
    else
    {
        std::cout << "The number is finite and not NaN.\n";
    }
}

int main()
{
    // Declare and initialize the variables
    float number1{1.12345678901234567890f}; // Precision : 7
    double number2{1.12345678901234567890}; // Precision : 15
    long double number3{1.12345678901234567890L};

    /*
    From GPT:

    double:
    Typically represents a 64-bit double-precision floating-point number.
    Usually provides at least 15 decimal digits of precision.
    Follows the IEEE 754 standard for double-precision floating-point numbers on most systems.
    Occupies 8 bytes of memory on most platforms.

    long double:
    Represents an extended-precision floating-point number.
    The exact size and precision can vary between compilers and platforms. It is at least as large as double, but it
    can be larger. On some systems, long double is the same as double (64 bits), while on others, it might be 80,
    96, or 128 bits. Provides more precision than double, often at least 18 decimal digits, but this can vary. May
    occupy 10, 12, or 16 bytes of memory, depending on the system and compiler.

    The choice between double and long double depends on the specific needs of your application. If you need more
    precision and are willing to accept potentially increased memory usage and computational cost, you might choose
    long double. If the precision of double is sufficient, it might be the more efficient choice.
    */

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                   // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits including the ones before the decimal
    std::cout << "number2 is : " << number2
              << std::endl; // 15'ish digits - get like 17 here but go with 15 to be safe per compiler and OS etc.
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits (at least 15)

    // Float problems : The precision is usually too limited
    // for a lot of applications
    float number4 = 192400023.0f; // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;

    // Scientific notation
    // What we have seen so far in terms of floating point types
    // is fixed notation. There is another notation, scientific
    // that is handy if you have really huge numbers or small numbers
    // to represent

    std::cout << "-------------------------" << std::endl;

    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8}; // Can omit the lower 00023
                             // for simplicity if our application allows that.
    double number8{0.00000000003498};
    double number9{3.498e-11}; // multiply with 10 exp(-11)

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    // Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10{-5.6};
    double number11{}; // Initialized to 0
    double number12{}; // Initialized to 0

    // Negative Infinity
    double result{number10 / number11};

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    check_inf_nan(result);

    // Positive Infinity
    number10 = -number10;
    result = number10 / number11;

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    check_inf_nan(result);

    // NaN
    result = number11 / number12;
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    check_inf_nan(result);

    return 0;
}