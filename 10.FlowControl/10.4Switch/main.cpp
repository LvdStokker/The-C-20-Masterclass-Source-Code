#include <iostream>
#include <string>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool{Eraser};

    switch (tool)
    {
        case Pen:
        {
            std::cout << "Active tool is Pen" << std::endl;
        }
        break;

        case Marker:
        {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;

        case Eraser:
        case Rectangle:
        case Circle:
        {
            std::cout << "Drawing Shapes" << std::endl;
        }
        break;

        case Ellipse:
        {
            std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;

        default:
        {
            std::cout << "No match found" << std::endl;
        }
        break;
    }

    std::cout << "Moving on" << std::endl;

    /*
    // Condition can only be integer of enum (We'll learn about enums later in the course)
    std::string name {"John"};
    switch (name) // Compiler error!
    {

    }
    */

    return 0;
}

// Luke
/*
  Switch Statement in C++:

  - Used to compare a single expression against multiple constant values.
  - Provides a more concise and readable alternative to a series of if-else if statements for multi-way decisions.

  Syntax:
    switch (expression) {
      case value1:
        // Code to execute if expression == value1
        break;
      case value2:
        // Code to execute if expression == value2
        break;
      // Additional cases as needed
      default:
        // Code to execute if no cases match
    }

  Rules and Considerations:
  - Expression: The expression must evaluate to an integral or enumeration type.
  - Case Values: Case values must be constant and unique within the switch statement.
  - Break Statement: The 'break' keyword is used to exit the switch statement once a matching case is found. Without it,
  execution will continue to the next case (fallthrough).
  - Default Case: The 'default' case is executed if no other cases match. It is optional but can be useful for handling
  unexpected values.
  - Scope: Variables declared within a case block should be enclosed in braces to create a local scope.

  Practical Applications:
  - Implementing menu systems or state machines.
  - Handling specific values or categories in a clear and organized way.

  Conclusion:
  - The switch statement is a powerful control structure for handling multi-way decisions in C++.
  - It offers a concise and structured way to compare a single expression against multiple constant values.
  - Careful consideration of case values, break statements, and scope leads to robust and maintainable code.
*/
