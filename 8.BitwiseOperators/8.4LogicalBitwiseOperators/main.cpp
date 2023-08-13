#include <bitset>
#include <iomanip>
#include <iostream>

int main()
{
    int COLUMN_WIDTH{20};
    unsigned char value1{0x3}; // 0000 0011
    unsigned char value2{0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "value1 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1)
              << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "value2 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2)
              << std::endl;

    // AND
    std::cout << std::endl;
    std::cout << "Bitwise AND :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2 : " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 & value2) << std::endl;
    std::cout << std::endl;

    // OR
    std::cout << std::endl;
    std::cout << "Bitwise OR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2 : " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 | value2) << std::endl;
    std::cout << std::endl;

    // NOT
    std::cout << std::endl;
    std::cout << "Bitwise NOT " << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "~value1 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1)
              << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "~value2 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2)
              << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001)
              << std::endl; // Using bin literal

    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59)
              << std::endl; // Using hex literal
    std::cout << std::endl;

    // XOR
    std::cout << std::endl;
    std::cout << "Bitwise XOR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2 : " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 ^ value2) << std::endl;
    std::cout << std::endl;

    return 0;
}

// Luke
/*
  Logical Bitwise Operators in C++:

  1. Bitwise AND Operator (&):
     - Performs a logical AND operation on corresponding bits of two values.
     - Example: int y = x & z;

  2. Bitwise OR Operator (|):
     - Performs a logical OR operation on corresponding bits of two values.
     - Example: int y = x | z;

  3. Bitwise XOR Operator (^):
     - Performs a logical XOR operation on corresponding bits of two values.
     - The XOR operator performs a logical Exclusive OR operation on corresponding bits of two values.
     - It returns 1 for a bit position if the corresponding bits of its operands are different (i.e., one is 0 and the
  	   other is 1).
     - If the corresponding bits are the same (both 0 or both 1), it returns 0 for that bit position.
     - Example: int y = x ^ z;

  4. Bitwise NOT Operator (~):
     - Performs a logical NOT operation on each bit of a value.
     - Example: int y = ~x;

  Rules and Considerations:
  - Data Types: Can be applied to integer types (char, short, int, long, long long).
  - Type Promotion: Smaller types may be promoted to int or unsigned int according to the usual arithmetic conversions.
  - Sign Bit: The behavior on signed types can vary depending on the values and the specific operator used.
  - Combining with Assignment: Can be combined with the assignment operator (e.g., x &= z).

  Practical Applications:
  - Manipulating individual bits within a value.
  - Performing bitwise arithmetic and logic operations.
  - Working with flags and masks in low-level programming.

  Conclusion:
  - Logical bitwise operators provide a way to manipulate data at the bit level.
  - Understanding the rules, including type promotion, is essential for writing efficient and correct code.
*/
