#include <iostream>

int main()
{
    constexpr int SOME_LIB_MAJOR_VERSION{1237};

    constexpr int eye_count{2};

    constexpr double PI{3.14};

    // eye_count = 4;

    std::cout << "eye count : " << eye_count << std::endl;
    std::cout << "PI : " << PI << std::endl;

    // int leg_count {2}; // Non constexpr
    //  leg_count is not known at compile time
    // constexpr int arm_count{leg_count}; // Error

    constexpr int room_count{10};
    constexpr int door_count{room_count}; // OK

    // Initialization of 'constexpr' with 'const':
    // - A 'const' variable initialized with a constant expression can be used to initialize a 'constexpr' variable.
    // - This allows for more flexibility in defining compile-time constants.
    // - However, this behavior may depend on the linkage of the 'const' variable and other factors.
    // Example:
    const int table_count{5};                   // 'const' variable initialized with a constant expression
    constexpr int chair_count{table_count * 5}; // 'constexpr' variable initialized with 'const' variable
    // This code compiles because 'table_count' is a constant expression, allowing it to be used in the initialization
    // of 'chair_count'.

    // 'const' and 'constexpr' in C++:
    // - 'const' indicates that a variable's value cannot be changed.
    // - 'constexpr' indicates that a variable's value is known and usable at compile time.
    // - A 'const' variable initialized with a constant expression can be used in a constant expression.
    // - However, a 'const' variable is not implicitly 'constexpr'.
    // Example:
    // const int table_count{5};                   // 'const' variable initialized with a constant expression
    // constexpr int chair_count{table_count * 5}; // 'constexpr' variable initialized with 'const' variable
    // 'table_count' is known at compile time and can be used to initialize 'chair_count', but it is not itself
    // 'constexpr'.

    // static_assert( SOME_LIB_MAJOR_VERSION == 123);

    // int age = 5;
    // static_assert( age == 5);

    std::cout << "App doing its thing..." << std::endl;

    // Luke
    // The 'constexpr' Keyword in C++:
    // - Compile-Time Evaluation: Values are computed at compile time.
    // - Immutability: 'constexpr' variables cannot be changed after initialization.
    // - Functions: 'constexpr' functions return constant expressions.
    // - Optimization: Enables more optimized code by evaluating expressions at compile time.
    // - Usage in Constant Expressions: Can be used in contexts requiring compile-time constants.
    // Differences Between 'const' and 'constexpr':
    //   - Evaluation Time: 'const' may be initialized at runtime; 'constexpr' must be at compile time.
    //   - Usage: 'const' for runtime constants; 'constexpr' for compile-time constants.
    //   - Functions: 'constexpr' can be applied to functions; 'const' cannot.
    // Examples:
    //   constexpr Variable: constexpr int maxUsers = 100;
    //   constexpr Function: constexpr int square(int x) { return x * x; }
    // Use 'constexpr' for values that must be known at compile time, and 'const' for values that should not be
    // modified. 'constexpr' enhances efficiency, safety, and expressiveness in contexts requiring compile-time
    // evaluation.

    // Constant Expressions vs 'constexpr' in C++:
    // - Constant Expression: A value or expression known and fixed at compile time. Includes literals, expressions,
    // 'const' variables with constant expressions, and 'constexpr' variables.
    // - 'constexpr': A keyword that declares something must be a constant expression. Enforces compile-time evaluation.
    // Example:
    const int x     = 5; // 'x' is a constant expression because it is a 'const' variable initialized with a literal.
    constexpr int y = x * 3; // 'y' is a 'constexpr' variable, initialized with a constant expression.
    // 'constexpr' enforces that values are known at compile time, while a constant expression is any value or
    // expression that is fixed at compile time.

    // 'const int x = 5;' in C++:
    // - 'x' is declared as a constant integer and initialized with the literal value 5.
    // - 'x' cannot be modified after initialization.
    // - The value of 'x' is known at compile time, but it may be set at compile time or at runtime, depending on usage
    // and compiler optimization.
    // - If 'x' is used in a context requiring a constant expression, it must be evaluated at compile time.
    // - Otherwise, the compiler may choose to set the value at runtime or optimize it to use the value directly.
    const int x = 5; // 'x' is a constant integer, initialized with 5, known at compile time.

    // 'constexpr int x = 5;' in C++:
    // - 'x' is declared as a constant expression integer and initialized with the literal value 5.
    // - 'x' must be evaluated at compile time, not at runtime.
    // - 'x' cannot be modified after initialization.
    // - 'x' can be used in contexts that require constant expressions, such as array sizes and template arguments.
    constexpr int x = 5; // 'x' is a compile-time constant integer, initialized with 5.

    return 0;
}