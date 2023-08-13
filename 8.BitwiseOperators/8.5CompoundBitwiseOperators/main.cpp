#include <bitset>
#include <iomanip>
#include <iostream>

int main()
{
    const int COLUMN_WIDTH{20};

    std::cout << std::endl;
    std::cout << "Compound bitwise assignment operators" << std::endl;

    unsigned char sandbox_var{0b00110100}; // 8 bits : positive numbers only

    // Print out initial value
    std::cout << std::endl;
    std::cout << "Initial value :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    // Compound left shift
    std::cout << std::endl;
    std::cout << "Shift left 2 bit positions in place :  " << std::endl;
    sandbox_var <<= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    // Compound right shift
    std::cout << std::endl;
    std::cout << "Shift right 4 bit positions in place :  " << std::endl;
    sandbox_var >>= 4;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    // Compound OR with 0000 0010 to have all lower 4 bits turned on
    std::cout << std::endl;
    std::cout << "Compound OR with 0000 0010 :  " << std::endl;
    sandbox_var |= 0b00001111;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    // Compound AND with 0000 1100 to turn off the 2 lowest bits
    std::cout << std::endl;
    std::cout << "Compound AND with 0000 1100 :  " << std::endl;
    sandbox_var &= 0b00000000;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    // XOR with 00000011 to turn on the 4 lowest bits again
    std::cout << std::endl;
    std::cout << "Compound XOR with 0000 0011 :  " << std::endl;
    sandbox_var ^= 0b00000011;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var)
              << std::endl;
    std::cout << std::endl;

    return 0;
}

// Luke
/*
  Compound Bitwise Operators in C++:

  1. Bitwise AND Assignment Operator (&=):
     - Performs a bitwise AND operation and assigns the result to the variable.
     - Example: x &= y; // Equivalent to x = x & y;

  2. Bitwise OR Assignment Operator (|=):
     - Performs a bitwise OR operation and assigns the result to the variable.
     - Example: x |= y; // Equivalent to x = x | y;

  3. Bitwise XOR Assignment Operator (^=):
     - Performs a bitwise XOR operation and assigns the result to the variable.
     - Example: x ^= y; // Equivalent to x = x ^ y;

  4. Left Shift Assignment Operator (<<=):
     - Shifts the bits of a variable to the left and assigns the result to the
  variable.
     - Example: x <<= 2; // Equivalent to x = x << 2;

  5. Right Shift Assignment Operator (>>=):
     - Shifts the bits of a variable to the right and assigns the result to the
  variable.
     - Example: x >>= 2; // Equivalent to x = x >> 2;

  Rules and Considerations:
  - Data Types: Can be applied to integer types (char, short, int, long, long
  long).
  - Type Promotion: Smaller types may be promoted to int or unsigned int
  according to the usual arithmetic conversions.
  - Shift Amount: Must be non-negative for shift operators. Shifting by a
  negative amount or beyond the bit size is undefined.
  - Sign Bit: The behavior on signed types can vary depending on the values and
  the specific operator used.

  Practical Applications:
  - Allows concise modification of variables at the bit level.
  - Useful for optimizing code and performing repetitive bitwise operations.

  Conclusion:
  - Compound bitwise operators provide a shorthand way to perform bitwise
  operations and assign the result to a variable.
  - Understanding these operators and how to use them can lead to more concise
  and efficient code.
*/
