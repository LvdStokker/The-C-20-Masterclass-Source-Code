#include <bitset>
#include <iostream>
// Luke
#include <iomanip>

int main()
{
    // unsigned long long int data{15};
    char data{100};

    // Applied that static cast so that we can represent any unsigned int type and length
    std::cout << "data (dec) : " << std::showbase << std::dec << static_cast<unsigned long long int>(data) << std::endl;
    std::cout << "data (oct) : " << std::showbase << std::oct << static_cast<unsigned long long int>(data) << std::endl;
    std::cout << "data (hex) : " << std::showbase << std::hex << static_cast<unsigned long long int>(data) << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(static_cast<unsigned long long int>(data))
              << std::endl; // This does not dynamically set bit length per data type
    // Actually only need to say std::showbase once. Does not show base for binary though
    std::cout << "\n-----LUKE TESTS-----" << std::endl;
    // Can also say (var must be known at compile time):
    constexpr size_t bits = sizeof(data) * 8;
    int oct_pos           = bits / 3 + 1;
    std::cout << "sizeof data (bytes) : " << std::dec << sizeof(data) << std::endl;
    std::cout << "no. bits : " << std::dec << bits << std::endl;
    std::cout << "oct pos : " << std::dec << oct_pos << std::endl;
    std::cout << "data (bin) : 0b" << std::bitset<bits>(static_cast<unsigned long long int>(data)) << std::endl;
    std::cout << "data (hex) : " << std::hex << static_cast<unsigned long long int>(data) << std::endl;

    // What if I want to show the full hex or octal value according to data type
    int hexWidth = sizeof(data) * 2; // Width for hexadecimal, excluding "0x" prefix
    int octWidth = oct_pos;          // Width for octal, excluding leading "0"
    std::cout << "data (dec) : " << std::showbase << std::dec << static_cast<unsigned long long int>(data) << std::endl;
    std::cout << "data (oct) : 0|" << std::noshowbase << std::oct << std::setw(octWidth) << std::setfill('0')
              << static_cast<unsigned long long int>(data) << std::endl; // should show extra 0 with base
    std::cout << "data (hex) : "
              << "0x"                        // Manually print "0x" prefix
              << std::noshowbase << std::hex // Suppress automatic "0x" prefix
              << std::setw(hexWidth) << std::setfill('0') << static_cast<unsigned long long int>(data) << std::endl;
    std::cout << "data (bin) : 0b" << std::bitset<bits>(static_cast<unsigned long long int>(data)) << std::endl;

    return 0;
}