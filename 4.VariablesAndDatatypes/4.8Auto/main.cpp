#include <iostream>

int main()
{
    auto var1{12};    // int = 32-bit (4 byte)
    auto var2{13.0};  // double = 64-bit (8 byte)
    auto var3{14.0f}; // float = 32-bit (4 byte)
    auto var4{15.0l}; // long double = 128-bit (16 byte)
    auto var5{'e'};   // char = 8-bit (1 byte)
    auto var6{true};  // bool = 8-bit (1 byte)

    // int modifier suffixes
    auto var7{123u};  // unsigned int = 32-bit (4 byte)
    auto var8{123ul}; // unsigned long = 32-bit (4 byte)
    auto var9{123ll}; // long long = 64-bit (8 byte)

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
    std::cout << "var9 occupies : " << sizeof(var9) << " bytes" << std::endl;

    return 0;
}