#include <bitset>
#include <iomanip>
#include <iostream>

int main()
{
    const int COLUMN_WIDTH{20};

    // Highlight position for bit of interest with a 1
    // Mask other positions with 0

    const unsigned char mask_bit_0{0b00000001}; // Bit0
    const unsigned char mask_bit_1{0b00000010}; // Bit1
    const unsigned char mask_bit_2{0b00000100}; // Bit2
    const unsigned char mask_bit_3{0b00001000}; // Bit3
    const unsigned char mask_bit_4{0b00010000}; // Bit4
    const unsigned char mask_bit_5{0b00100000}; // Bit5
    const unsigned char mask_bit_6{0b01000000}; // Bit6
    const unsigned char mask_bit_7{0b10000000}; // Bit7

    // Sandbox variable
    unsigned char var{0b00000000}; // Starts off all bits off

    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Set a few bits : make them 1's regardless of what's in there

    // SETTING BITS
    // Setting : |= with mask of the bit

    // Set bit 1
    std::cout << "Setting bit in position 1" << std::endl;
    var |= mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Set bit 5
    std::cout << "Setting bit in position 5" << std::endl;
    var |= mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // RESETTING BITS : set to 0
    // Resetting : &= (~mask)

    // Reset bit 1
    std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_1);
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Reset bit 5
    std::cout << "Resetting bit in position 5" << std::endl;
    var &= (~mask_bit_5);
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Set all bits
    std::cout << "Setting all bits" << std::endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Reset bits at pos 0,2,4,6
    std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Check state of a bit
    std::cout << std::endl;
    std::cout << "Checking the state of each bit position (on/off)" << std::endl;
    std::cout << "bit0 is " << ((var & mask_bit_0) >> 0) << std::endl;
    std::cout << "bit1 is " << ((var & mask_bit_1) >> 1) << std::endl;
    std::cout << "bit2 is " << ((var & mask_bit_2) >> 2) << std::endl;
    std::cout << "bit3 is " << ((var & mask_bit_3) >> 3) << std::endl;
    std::cout << "bit4 is " << ((var & mask_bit_4) >> 4) << std::endl;
    std::cout << "bit5 is " << ((var & mask_bit_5) >> 5) << std::endl;
    std::cout << std::boolalpha;
    std::cout << "bit6 is " << ((var & mask_bit_6) >> 6) << std::endl;
    std::cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << std::endl;

    std::cout << "bit7 is " << ((var & mask_bit_7) >> 7) << std::endl;
    std::cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << std::endl;

    // Toggle bits
    // Toggle : var ^ mask

    // Toggle bit 0
    std::cout << std::endl;
    std::cout << "Toggle bit 0" << std::endl;
    var ^= mask_bit_0;
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Toggle bit7
    std::cout << "Toggle bit 7" << std::endl;
    var ^= mask_bit_7;
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Toggle multiple bits in one go : the 4 higher bits
    std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
    var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
    std::cout << std::setw(COLUMN_WIDTH) << "var : " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    return 0;
}

// Luke
/*
  Bit Masking Technique in C++:

  Bit masking involves using bitwise operators to manipulate individual bits within an integer. It's commonly used for
  tasks like setting, clearing, toggling, or testing specific bits.

  Key Techniques:
  1. Setting a Bit:
     - Use the bitwise OR operator (|) with a mask that has a 1 in the position to set.
     - Example: x |= (1 << n); // Sets the nth bit of x

  2. Clearing a Bit:
     - Use the bitwise AND operator (&) with a mask that has a 0 in the position to clear.
     - Example: x &= ~(1 << n); // Clears the nth bit of x

  3. Toggling a Bit:
     - Use the bitwise XOR operator (^) with a mask that has a 1 in the position to toggle.
     - Example: x ^= (1 << n); // Toggles the nth bit of x

  4. Testing a Bit:
     - Use the bitwise AND operator (&) with a mask that has a 1 in the position to test.
     - Example: bool isSet = x & (1 << n); // Tests if the nth bit of x is set

  Rules and Considerations:
  - Data Types: Typically applied to integer types (char, short, int, long, long long).
  - Bit Position: Ensure that the bit position (n) is within the valid range for the data type.
  - Type Promotion: Be aware of type promotion rules, especially when working with smaller types.
  - Sign Bit: Be cautious when manipulating the sign bit in signed types, as it can change the sign of the value.
  - Readability: Consider using named constants for masks to improve code readability.

  Practical Applications:
  - Representing and manipulating sets of flags or options.
  - Efficiently storing and retrieving multiple Boolean values within a single integer.
  - Low-level hardware control and communication.

  Conclusion:
  - Bit masking is a powerful technique for bit-level manipulation in C++.
  - Understanding the rules and techniques is essential for writing efficient and correct code.
  - Careful consideration of data types, bit positions, and readability can lead to robust and maintainable code.
*/
