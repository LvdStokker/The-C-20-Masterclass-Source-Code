#include <iostream>

int main()
{
    // Precedence: which operation to do first
    // Associativity: which direction or which order to do it in
    // NOTE: Rather use parentheses to indicate your intentions than relying on prec. and ass.

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = a + b * c - d / e - f + g; //  6 +  24  -   3 - 2 + 5 = 30

    std::cout << "result : " << result << std::endl;

    result = a / b * c + d - e + f; //   16 + 9 - 3 + 2 = 24
    std::cout << "result : " << result << std::endl;

    result = (a + b) * c - d / e - f + g; // 72-3-2+5 = 72
    std::cout << "result () : " << result << std::endl;

    return 0;
}