#include <iostream>

int main()
{
    // Implicit cast will add up the doubles,
    // then turn result into int for assignment
    double x{12.5};
    double y{34.6};

    int sum = x + y;

    std::cout << "The sum  is : " << sum << std::endl;

    // Explicitly cast : cast then sum up
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "The sum  is : " << sum << std::endl;

    // Explicit cast : sum up then cast, same thing as implicit cast
    sum = static_cast<int>(x + y);
    std::cout << "Sum up then cast, result : " << sum << std::endl;

    // Old style C-cast
    double PI{3.14};

    int int_pi = (int)(PI);
    // int int_pi = static_cast<int>(PI);
    std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;

    return 0;
}

// Explicit Data Conversions in C++:
// - C-Style Cast: (type)value, like (int)3.14.
// - Static Cast: static_cast<type>(value), for standard conversions.
// - Dynamic Cast: dynamic_cast<type>(value), for downcasting with polymorphism.
// - Const Cast: const_cast<type>(value), to add/remove 'const'.
// - Reinterpret Cast: reinterpret_cast<type>(value), for pointer conversions.
// - Controlled Conversions: Explicit casting allows for specific, intentional conversions.
// - Potential Risks: Can lead to undefined behavior or errors if misused.
// Examples:
//   C-Style Cast: double d = 3.14; int i = (int)d;
//   Static Cast: float f = 5.5f; int x = static_cast<int>(f);
//   Dynamic Cast: Base* b = new Derived(); Derived* d = dynamic_cast<Derived*>(b);
//   Const Cast: const int c = 10; int* p = const_cast<int*>(&c);
//   Reinterpret Cast: int* p; long num = reinterpret_cast<long>(p);
// Explicit conversions provide control but must be used with understanding and caution.

// Modern C++ Casting vs C-Style Casting:
// - Modern C++ Casting: Includes static_cast, dynamic_cast, const_cast, reinterpret_cast.
// - Advantages:
//   1. Type Safety: Enforces specific rules for each type of cast.
//   2. Readability: Clear syntax indicates intent.
//   3. Maintainability: Specific casting operators make code more maintainable.
//   4. Compile-Time Checks: Some casts provide early error detection.
//   5. Avoiding Undefined Behavior: Helps prevent incorrect or unsafe conversions.
// - Examples:
//   C-Style Cast: (int)3.14; // Less clear, less safe
//   Static Cast: static_cast<int>(3.14); // More clear, type-safe
// - Modern C++ casting is generally preferred for its clarity, safety, and maintainability.

