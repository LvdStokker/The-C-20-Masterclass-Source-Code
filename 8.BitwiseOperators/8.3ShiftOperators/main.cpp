#include <bitset>
#include <iostream>

int main()
{
    unsigned short int value{0xff0u};

    std::cout << "Size of short int " << sizeof(short int) << std::endl; //  16 bits

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    // Shift by multiple bits in one go
    // Shift right by four bits
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;

    //
    std::cout << "value : " << (value >> 1) << std::endl;

    return 0;
}

// Luke
/*
  Bit Shift Operators in C++:

  1. Left Shift Operator (<<):
     - Shifts the bits of a value to the left by a specified number of positions.
     - Example: char y = (char)(x << 2);

  2. Right Shift Operator (>>):
     - Shifts the bits of a value to the right by a specified number of positions.
     - Example: char y = (char)(x >> 2);

  Rules and Considerations:
  - Data Types: Can be applied to integer types (char, short, int, long, long long).
  - Result Type: The result of the shift operation is of type int as a minimum size. Casting back to the original data
  type may be necessary.
  - Shift Amount: Must be non-negative. Shifting by a negative amount or beyond the bit size is undefined.
  - Sign Bit: Different effects on signed and unsigned types. Right-shifting a negative signed value is
  implementation-defined.
  - Overflow: Left-shifting a positive value can cause overflow, leading to undefined behavior.
  - Combining with Assignment: Can be combined with the assignment operator (e.g., x <<= 2).

  Practical Applications:
  - Multiplying or dividing by powers of 2.
  - Extracting individual bits from a value.
  - Manipulating hardware registers in embedded systems.

  Conclusion:
  - Bit shift operators provide a way to manipulate data at the bit level.
  - Understanding the rules, including the need to cast the result back to the original type, is essential for writing
  efficient and correct code.
*/
