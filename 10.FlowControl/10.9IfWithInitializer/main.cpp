#include <iostream>

int main()
{
    bool go{true};

    if (int speed{10}; go)// cannot init more than 1 var
    {
        std::cout << "speed : " << speed << std::endl;

        if (speed > 5)
        {
            std::cout << "Slow down!" << std::endl;
        }
        else
        {
            std::cout << "All good!" << std::endl;
        }
    }
    else
    {
        std::cout << "speed : " << speed << std::endl;
        std::cout << "Stop" << std::endl;
    }

    // std::cout << "Out of the if block , speed : " << speed << std::endl;

    return 0;
}

/*
  If with Initializer in C++:

  Definition:
  - Introduced in C++17, the "If with Initializer" feature allows you to declare a variable
    within an if statement, which can then be used in the subsequent condition check.

  Syntax:
  - if (initializer; condition) { // code for true condition }

  Example:
  - if (int result = compute(); result > threshold) {
      std::cout << "Result exceeds threshold: " << result << std::endl;
    } else {
      std::cout << "Result is within acceptable range: " << result << std::endl;
    }

  Benefits:
  - Scope Limitation: The variable declared in the initializer has its scope limited to the
    if statement and its associated else or else if branches.
  - Readability: It can make code more concise and clear by reducing the need for separate
    variable declaration lines before the if statement.
  - Resource Management: Useful in situations where acquiring a resource (like a lock) is
    conditional, and you want to limit the scope of that resource.

  Considerations:
  - Limited Scope: Remember that the variable declared in the initializer is not accessible
    outside the if-else block.
  - Not Always Appropriate: While it can make code cleaner in some cases, it might not be
    suitable for all scenarios. Use judiciously.

  Conclusion:
  - "If with Initializer" is a useful feature in C++17 that can enhance code clarity and
    manage resource scope effectively.
  - As with all language features, it should be used where it improves readability and
    maintainability.
*/

