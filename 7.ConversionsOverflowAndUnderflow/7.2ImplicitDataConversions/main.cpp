#include <iostream>

int main()
{
    //		. The compiler applies implicit conversions
    // 			when types are different in
    //			an expression
    //		. Conversions are always done from the smallest
    //			to the largest type in this case int is
    //			transformed to double before the expression
    //			is evaluated.Unless we are doing an assignment

    double price{45.6};
    int units{10};

    auto total_price = price * units; // units will be implicitly converted to double

    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;

    // Implicit conversions in assignments
    //  The assignment operation is going to cause an implicit
    //  narrowing conversion , y is converted to int before assignment
    int x;
    double y{45.44};
    x = y;                                                 // double to int
    std::cout << "The value of x is : " << x << std::endl; // 45
    std::cout << "sizeof x : " << sizeof(x) << std::endl;  // 4

    // Luke
    // Implicit Data Conversions in C++:
    // - Standard Conversions: Well-defined conversions between types, such as numeric and pointer conversions.
    // - Promotions: Converting smaller types to larger types, like 'char' to 'int'.
    // - Arithmetic Conversions: Converting operands to a common type in arithmetic operations.
    // - Assignment: Converting a value to the type of the variable being assigned to.
    // - Function Arguments: Converting arguments to the types expected by a function.
    // - Potential Pitfalls: Can lead to loss of data or precision, especially in downcasting or floating-point to
    // integer conversions. Examples:
    //   Promotion in Computation: short s = 10; int i = s + 5;
    //   Floating-Point to Integer: double d = 5.9; int i = d;
    //   Assignment: float f = 3.14; double d = f;
    //   Function Call: void func(int x); float f = 5.5; func(f);
    // Implicit conversions are convenient but can be a source of bugs if not handled with care.

    return 0;
}