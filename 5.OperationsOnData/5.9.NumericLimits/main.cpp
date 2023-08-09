#include <bitset>
#include <iomanip>
#include <iostream>
#include <limits>

void print_float_binary(float value)
{
    unsigned int intValue = *reinterpret_cast<unsigned int*>(&value);
    std::bitset<32> bits(intValue);
    std::cout << std::endl;
    // Extract the sign, exponent, and mantissa
    int sign     = (intValue >> 31) & 1;
    int exponent = (intValue >> 23) & 0xFF;
    int mantissa = intValue & 0x7FFFFF;

    // Check if the number is denormalized (exponent is 0)
    if (exponent == 0)
    {
        std::cout << "Denormalized number\n";
    }
    else
    {
        std::cout << "Normalized number\n";
    }

    // Print the binary representation
    std::cout << "Binary representation: " << bits << '\n';

    // Print the sign, exponent, and mantissa
    std::cout << "Sign: " << sign << ", Exponent: " << exponent << ", Mantissa: " << std::bitset<23>(mantissa) << '\n';

    // Print the approximate value
    std::cout << "Approximate value: " << value << '\n';
}

void print_binary_fraction(float value)
{
    unsigned int intValue = *reinterpret_cast<unsigned int*>(&value);
    int exponent          = (intValue >> 23) & 0xFF;
    int mantissa          = intValue & 0x7FFFFF;
    std::cout << std::endl;
    // Check if the number is normalized or denormalized
    if (exponent == 0)
    {
        std::cout << "Denormalized number\n";
        std::cout << "0."; // Leading 0 for denormalized numbers
    }
    else
    {
        std::cout << "Normalized number\n";
        std::cout << "1."; // Implicit leading 1 for normalized numbers
    }

    // Print the binary fractional representation
    for (int i = 22; i >= 0; --i)
    {
        std::cout << ((mantissa >> i) & 1);
    }
    std::cout << '\n';

    // Print the approximate value
    std::cout << "Approximate value: " << value << '\n';
}

int main()
{
    std::cout << std::setprecision(20);
    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to "
              << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to "
              << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << std::endl;

    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to "
              << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
              << std::numeric_limits<long>::max() << std::endl;

    std::cout << "The range for unsigned long is from " << std::numeric_limits<unsigned long>::min() << " to "
              << std::numeric_limits<unsigned long>::max() << std::endl;

    std::cout << "The range for long long is from " << std::numeric_limits<long long>::min() << " to "
              << std::numeric_limits<long long>::max() << std::endl;

    std::cout << "The range for unsigned long long is from " << std::numeric_limits<unsigned long long>::min() << " to "
              << std::numeric_limits<unsigned long long>::max() << std::endl;

    // std::numeric_limits<float/double/long double>::min() returns the smallest positive normalized value.
    // std::numeric_limits<float/double/long double>::denorm_min() returns the smallest positive value, including
    // denormalized numbers. std::numeric_limits<float/double/long double>::lowest() returns the most negative
    // representable value. Note: 0.0/L is a valid value for a float/double/long double, but it's not represented by any
    // of the above functions.

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to "
              << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for double is from " << std::numeric_limits<double>::min() << " to "
              << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range for long double is from " << std::numeric_limits<long double>::min() << " to "
              << std::numeric_limits<long double>::max() << std::endl;

    std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to "
              << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to "
              << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest()
              << " to " << std::numeric_limits<long double>::max() << std::endl;

    // Other facilities
    // More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;

    // Luke Test
    double value = 1.123456789;
    std::bitset<64> bits(*reinterpret_cast<unsigned long long*>(&value));
    std::cout << "\nBinary representation: " << bits << '\n';
    std::cout << "Approximate value: " << value << '\n';

    float value2 = 1.123456789f;                                      // Note the 'f' suffix to make it a float literal
    std::bitset<32> bits2(*reinterpret_cast<unsigned int*>(&value2)); // Use 32 bits for float
    std::cout << "\nBinary representation: " << bits2 << '\n';
    std::cout << "Approximate value: " << value2 << '\n';

    print_float_binary(value2);
    print_binary_fraction(value2);

    // Normalised method
    float value3 = 1.1e-37f;
    print_float_binary(value3);
    print_binary_fraction(value3);
    // Denormalised method
    float value4 = 1.1e-44f;
    print_float_binary(value4);
    print_binary_fraction(value4);

    // In floating-point representation, numbers are categorized as either normalized or denormalized (subnormal).
    //
    // Normalized Numbers:
    // - Have an implicit leading 1 before the binary point.
    // - Represent most floating-point numbers, including large and small values.
    // - Example: The decimal number 1.25 is represented as 1.01 in binary (normalized).
    //
    // Denormalized (Subnormal) Numbers:
    // - Used for values very close to zero, where the implicit leading 1 is changed to 0.
    // - Allow representation of numbers closer to zero than normalized numbers.
    // - Example: The smallest positive denormalized number might look like 0.000...001 in binary.
    //
    // These concepts allow computers to handle a wide range of values, from very large to very close to zero.

    float denorm_float = std::numeric_limits<float>::denorm_min();
    float norm_float   = std::numeric_limits<float>::min();

    double denorm_double = std::numeric_limits<double>::denorm_min();
    double norm_double   = std::numeric_limits<double>::min();

    long double denorm_long_double = std::numeric_limits<long double>::denorm_min();
    long double norm_long_double   = std::numeric_limits<long double>::min();

    std::cout << "\nDenormalized float min: " << denorm_float << "\n";
    std::cout << "Normalized float min: " << norm_float << "\n";

    // Denormalized float: 1.4013e-45 is the smallest positive denormalized value for 'float', allowing representation
    // of very small numbers close to zero.
    // Normalized float: 1.17549e-38 is the smallest positive normalized value for 'float', following the standard
    // floating-point format with an implicit leading 1.

    std::cout << "Denormalized double min: " << denorm_double << "\n";
    std::cout << "Normalized double min: " << norm_double << "\n";

    std::cout << "Denormalized long double min: " << denorm_long_double << "\n";
    std::cout << "Normalized long double min: " << norm_long_double << "\n";
    return 0;
}