#include <iostream>

int main()
{
    int condition{-5};

    // bool bool_condition = condition; -> would be converted to a bool
    // std::cout << std::boolalpha;

    if (condition) // here it is evaluated as a bool not set to a bool value
    {
        std::cout << "We have a " << condition << " in our variable " << std::endl; // different from 0
    }
    else
    {
        std::cout << "We have " << condition << " in our variable" << std::endl; // zero
    }

    return 0;
}

/*
  Integral Logic Conditions in C++:

  Definition:
  - In C++, integral types (like int, char, long, etc.) can be used in logical conditions.
    By convention, a value of 0 is considered "false", and any non-zero value is considered "true".

  Common Usage:
  - Loop constructs: while (count--) { // ... }
  - Conditional checks: if (value) { // ... }

  Rules and Considerations:
  - Implicit Conversion: When an integral value is used in a context where a boolean is expected,
    it's implicitly converted to false if it's 0, and true otherwise.
  - Clarity: Using integral values directly in conditions can be less clear than using explicit
    boolean checks. It's often recommended to make the condition explicit for better readability,
    e.g., if (value != 0) { // ... }.
  - Beware of Assignments: Be cautious of accidental assignments in conditions, e.g., if (value = 1).
    This will assign 1 to value and always evaluate to true. Always use == for comparison.
  - Type Safety: Modern C++ practices recommend using strong type checks. Consider using explicit
    boolean checks or the bool type for conditions.

  Practical Applications:
  - Checking for non-zero values: if (errorCode) { // Handle error }
  - Looping until a value is exhausted: while (retries--) { // Attempt operation }

  Conclusion:
  - While C++ allows integral values to be used in logical conditions, it's essential to understand
    the implicit conversion rules.
  - For clarity and maintainability, prefer explicit boolean checks or the bool type for conditions.
  - Always be cautious of accidental assignments in conditions and prioritize code readability.
*/
