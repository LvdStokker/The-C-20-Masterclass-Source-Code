#include <iostream>

int main()
{
    // Overflow

    unsigned char data{250};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl; // 255

    ++data;                                                        // Overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 256

    std::cout << std::dec;

    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    return 0;
}

// Overflow and Underflow in C++:
// - Overflow: Occurs when a value exceeds the maximum representable value for its type.
//   - Integer Overflow: Exceeding the maximum integer value.
//   - Floating-Point Overflow: Exceeding the maximum finite floating-point value.
//   - Consequences: Undefined behavior, incorrect results, exceptions.
// - Underflow: Occurs when a value falls below the minimum representable value.
//   - Integer Underflow: Falling below the minimum integer value, especially with unsigned integers.
//   - Floating-Point Underflow: Falling below the smallest positive floating-point value.
//   - Consequences: Undefined behavior, wrapping to large positive value (unsigned), loss of precision, rounding to zero, denormalized representation.
// - Examples:
//   Integer Overflow: int x = INT_MAX; x += 1; // Overflow
//   Integer Underflow: unsigned int x = 0; x -= 1; // Underflow, x becomes UINT_MAX
//   Floating-Point Overflow: double y = DBL_MAX; y *= 2; // Overflow
//   Floating-Point Underflow: double z = DBL_MIN; z /= 2; // Underflow
// - Care must be taken to avoid overflow and underflow, as they can lead to unexpected behavior and errors.

