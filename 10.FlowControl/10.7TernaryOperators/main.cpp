#include <iostream>

int main()
{
    int max{};

    int a{35};
    int b{200};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    std::cout << "max : " << max << std::endl;

    std::cout << "using ternary if " << std::endl;
    max = (a > b) ? a : b; // Ternary operator -> if max was auto and a and b are of different types (convertible) then
                           // the result if of the type of the outcome

    std::cout << "max : " << max << std::endl;

    return 0;
}

/*
  Ternary Operator in C++:

  Definition:
  - The ternary operator, also known as the conditional operator, is a shorthand way of writing
    an if-else statement. It evaluates a condition and returns one of two values depending on
    whether the condition is true or false.

  Syntax:
  - condition ? value_if_true : value_if_false;

  Example:
  - int result = (a > b) ? a : b; // Assigns the larger of a and b to result

  Rules and Considerations:
  - Clarity: While the ternary operator can make code more concise, it can also make it less
    readable if overused or used in complex conditions. Use it judiciously and prioritize code clarity.
  - Type Consistency: The types of value_if_true and value_if_false should be compatible. The compiler
    will attempt to convert one to the other if they are different, which might lead to unexpected results.
  - Nesting: Ternary operators can be nested, but this can reduce readability. If you find yourself
    nesting ternary operators, consider using regular if-else statements for clarity.
  - Side Effects: Be cautious when using functions with side effects within the ternary operator,
    as it can make the code harder to understand and debug.

  Practical Applications:
  - Quick assignments based on a condition.
  - Inline conditional logic within function arguments or return statements.

  Conclusion:
  - The ternary operator offers a concise way to perform conditional assignments and evaluations.
  - While it can make code shorter, always consider the trade-off between brevity and readability.
  - Use the ternary operator judiciously and always prioritize clear and maintainable code.
*/
