#include <iostream>

bool car()
{
    std::cout << "car function running" << std::endl;
    return false;
}

bool house()
{
    std::cout << "house function running" << std::endl;
    return true;
}

bool job()
{
    std::cout << "job function running" << std::endl;
    return false;
}

bool spouse()
{
    std::cout << "spouse function running" << std::endl;
    return false;
}

int main()
{
    /*
    bool a{ true };
    bool b{ true };
    bool c{ true };
    bool d{ false };

    bool p{ false };
    bool q{ false };
    bool r{ false };
    bool m{ true };


    //AND : If one of the operands is 0, the result is 0
    std::cout << std::endl;
    std::cout << "AND short circuit" << std::endl;
    bool result = a && b && c && d;
    std::cout << "result : " << std::boolalpha << result << std::endl;

    //OR : If one of the operands is 1, the result is 1.
    std::cout << std::endl;
    std::cout << "OR short circuit" << std::endl;
    result = p || q || r || m;
    std::cout << "result : " << std::boolalpha << result << std::endl;
    */

    /*
     if (car() && house() && job() && spouse()) { // job() and spouse() will not run if house is false
         std::cout << "I am happy" << std::endl;
     }
     else {
         std::cout << "I am sad" << std::endl;
     }
     */

    if (car() || house() || job() || spouse()) // job() and spouse() will not run if house is true
    {
        std::cout << "I am happy" << std::endl;
    }
    else
    {
        std::cout << "I am sad" << std::endl;
    }

    return 0;
}

/*
  Short-Circuit Evaluation in C++:

  Definition:
  - Short-circuit evaluation refers to the behavior in which the second argument of a logical operation is evaluated
  only if the first argument does not determine the result.

  Common Operators that Use Short-Circuit Evaluation:
  - Logical AND (&&): If the left operand is false, the right operand is not evaluated, because the result is already
  determined to be false.
  - Logical OR (||): If the left operand is true, the right operand is not evaluated, because the result is already
  determined to be true.

  Rules and Considerations:
  - Order Matters: The left operand is always evaluated before the right operand.
  - Side Effects: If the right operand contains a function call or any other operation with a side effect, it may not be
  executed due to short-circuiting.
  - Performance: Short-circuit evaluation can improve performance by avoiding unnecessary evaluations, especially when
  the right operand is computationally expensive.
  - Readability: While short-circuiting can be useful, it can also make code harder to understand if used in complex
  conditions. Always prioritize clarity.

  Practical Applications:
  - Checking for null before accessing a member: `if (ptr && ptr->value)`
  - Ensuring conditions are met before performing an operation: `if (isValid() && performOperation())`

  Conclusion:
  - Short-circuit evaluation is a powerful feature in C++ that can optimize logical operations.
  - Developers should be aware of its behavior to avoid unexpected results, especially when side effects are involved.
  - Always use short-circuit evaluation judiciously and prioritize code clarity and maintainability.
*/
