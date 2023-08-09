#include <iostream>

int main()
{
    signed int value1{10}; // Default is a 32-bit signed integer
    signed int value2{-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3{4};
    // unsigned int value4{-5}; // Compiler error.

    // short and long
    short short_var{-32768};                 //  2 Bytes = 16-bit
    short int short_int{455};                //
    signed short signed_short{122};          //
    signed short int signed_short_int{-456}; //
    unsigned short int unsigned_short_int{456};

    int int_var{55};           // 4 bytes
    signed signed_var{66};     //
    signed int signed_int{77}; //
    unsigned int unsigned_int{77};

    long long_var{88}; // 4 OR 8 Bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    /*
    From GPT:
    4 Bytes: On most 32-bit systems, the long data type typically takes up 4 bytes. This is common in 32-bit versions of
    Windows, Linux, and other operating systems.

    8 Bytes: On most 64-bit systems, especially those following the LP64 data model (such as most Unix-based systems,
    including macOS and Linux on x86-64), the long data type typically takes up 8 bytes.

    However, these are not strict rules, and the actual size can vary between different compilers and target
    architectures. If you need to ensure a specific size, you might want to use fixed-width integer types from the
    <cstdint> header, such as int32_t or int64_t.

    The size of a long can vary between systems and compilers, and it is not guaranteed to be 8 bytes. On many 64-bit
    Windows systems, for example, a long is 4 bytes, even though the system is 64-bit.

    The size of long is not fixed across all platforms, and it can be either 4 or 8 bytes, depending on the system and
    compiler. If you are getting 4 bytes for this type on your 64-bit system with different compilers, it is consistent
    with the LLP64 data model, which is common on Windows.
    */

    // C++ Integral Types (typical sizes):
    // - int or signed int: Regular integer, 32 bits (4 bytes).
    // - short int or short: Short integer, 16 bits (2 bytes).
    // - long int or long: Long integer, 32 or 64 bits (4 or 8 bytes) depending on the system.
    // - long long int or long long: Long long integer, at least 64 bits (8 bytes).
    // - unsigned int: Unsigned regular integer, 32 bits (4 bytes).
    // - unsigned short int or unsigned short: Unsigned short integer, 16 bits (2 bytes).
    // - unsigned long int or unsigned long: Unsigned long integer, 32 or 64 bits (4 or 8 bytes) depending on the
    // system.
    // - unsigned long long int or unsigned long long: Unsigned long long integer, at least 64 bits (8 bytes).
    // The exact size and range of these types can vary depending on the compiler and system architecture.

    // In standard C++, the largest integral type for representing mathematical integers is 'long long int' or 'unsigned
    // long long int',
    // both of which are guaranteed to be at least 64 bits, or 8 bytes. This is the maximum standard integer type in
    // terms of byte size.

    long long long_long{888}; // 8 Bytes = 64-bit number
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "---------------------" << std::endl;

    std::cout << "Short variable : " << short_var << " , size : " << sizeof(short) << " bytes" << std::endl;

    std::cout << "Short Int : " << short_int << " , size : " << sizeof(short int) << " bytes" << std::endl;

    std::cout << "Signed short : " << signed_short << " , size : " << sizeof(signed short) << " bytes" << std::endl;

    std::cout << "Signed short int :  " << signed_short_int << " , size : " << sizeof(signed short int) << " bytes"
              << std::endl;

    std::cout << "unsigned short int :  " << unsigned_short_int << " , size : " << sizeof(unsigned short int)
              << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;

    std::cout << "Int variable :  " << int_var << " , size : " << sizeof(int) << " bytes" << std::endl;

    std::cout << "Signed variable " << signed_var << " , size : " << sizeof(signed) << " bytes" << std::endl;

    std::cout << "Signed int :  " << signed_int << " , size : " << sizeof(signed int) << " bytes" << std::endl;

    std::cout << "unsigned int :  " << unsigned_int << " , size : " << sizeof(unsigned int) << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;

    std::cout << "Long variable :  " << long_var << " , size : " << sizeof(long) << " bytes" << std::endl;

    std::cout << "Long int :  " << long_int << " , size : " << sizeof(long int) << " bytes" << std::endl;

    std::cout << "Signed long :  " << signed_long << " , size : " << sizeof(signed long) << " bytes" << std::endl;

    std::cout << "Signed long int : " << signed_long_int << " , size : " << sizeof(signed long int) << " bytes"
              << std::endl;

    std::cout << "unsigned long int : " << unsigned_long_int << " , size : " << sizeof(unsigned long int) << " bytes"
              << std::endl;

    std::cout << "---------------------" << std::endl;

    std::cout << "Long long : " << long_long << " , size : " << sizeof(long long) << " bytes" << std::endl;

    std::cout << "Long long int : " << long_long_int << " , size : " << sizeof(long long int) << " bytes" << std::endl;

    std::cout << "Signed long long : " << signed_long_long << " , size : " << sizeof(signed long long) << " bytes"
              << std::endl;

    std::cout << "Signed long long int : " << signed_long_long_int << " , size : " << sizeof(signed long long int)
              << " bytes" << std::endl;

    std::cout << "unsigned long long int : " << unsigned_long_long_int << " , size : " << sizeof(unsigned long long int)
              << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;

    return 0;
}