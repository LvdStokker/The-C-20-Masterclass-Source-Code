#include <iostream>

int main()
{
    short int var1{10}; // 2 bytes
    short int var2{20};

    char var3{40}; // 1
    char var4{50};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4
    std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4

    // Luke
    short int result3 = var1 + var2;
    char result4      = var3 + var4;

    std::cout << "size of result3 : " << sizeof(result3) << std::endl; // 2
    std::cout << "size of result4 : " << sizeof(result4) << std::endl; // 1

    // So what is going on here? --> integer promotion
    short a   = 30000;
    short b   = 10000;
    short sum = a + b; // a and b are promoted to int, added, and the result is converted back to short

    // In C++, when performing arithmetic operations on smaller integral types like 'short',
    // the operands are first promoted to 'int', the arithmetic operation is carried out,
    // and then the result is implicitly converted back to the original type if assigned to it.
    // For example:
    //   short a = 30000;
    //   short b = 10000;
    //   short sum = a + b; // a and b are promoted to int, added, and the result is converted back to short
    // This behavior is equivalent to using an explicit cast:
    //   short sum = static_cast<short>(a + b);
    // Care should be taken as this conversion can lead to overflow or truncation if the result
    // is outside the range that can be represented by 'short'.

    return 0;
}