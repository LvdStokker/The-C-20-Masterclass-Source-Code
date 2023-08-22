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

    switch (double strength{3.56}; tool)
    {
        case Pen:
        {
            std::cout << "Active tool is Pen. strength : " << strength << std::endl;
        }
        break;

        case Marker:
        {
            std::cout << "Active tool is Marker. strength : " << strength << std::endl;
        }
        break;

        case Eraser:
        case Rectangle:
        case Circle:
        {
            std::cout << "Drawing Shapes. strength : " << strength << std::endl;
        }
        break;

        case Ellipse:
        {
            std::cout << "Active tool is Ellipse. strength : " << strength << std::endl;
        }
        break;

        default:
        {
            std::cout << "No match found. strength : " << strength << std::endl;
        }
        break;
    }

    std::cout << "Moving on" << std::endl;
    // strength = 2.2; -> not in scope

    switch (int tool2{Pen}; tool2) // tool2 only exists within this switch scope and is also used to evaluate the switch
    {
        case Pen:
        {
            std::cout << "Active tool is Pen." << std::endl;
        }
        break;

        case Marker:
        {
            std::cout << "Active tool is Marker." << std::endl;
        }
        break;

        case Eraser:
        case Rectangle:
        case Circle:
        {
            std::cout << "Drawing Shapes." << std::endl;
        }
        break;

        case Ellipse:
        {
            std::cout << "Active tool is Ellipse." << std::endl;
        }
        break;

        default:
        {
            std::cout << "No match found." << std::endl;
        }
        break;
    }

    return 0;
}

/*
  Switch with Initializer in C++:

  Definition:
  - Introduced in C++17, the "Switch with Initializer" feature allows you to declare a variable
    within a switch statement, which can then be used in the subsequent case labels.

  Syntax:
  - switch (initializer; value) { case labels and code }

  Example:
  - switch (int color = getColor(); color) {
      case RED:
        std::cout << "Color is red." << std::endl;
        break;
      case BLUE:
        std::cout << "Color is blue." << std::endl;
        break;
      default:
        std::cout << "Unknown color." << std::endl;
    }

  Benefits:
  - Scope Limitation: The variable declared in the initializer has its scope limited to the
    switch statement and its associated case and default labels.
  - Readability: It can make code more concise and clear by reducing the need for separate
    variable declaration lines before the switch statement.

  Considerations:
  - Limited Scope: Remember that the variable declared in the initializer is not accessible
    outside the switch block.
  - Not Always Appropriate: While it can make code cleaner in some cases, it might not be
    suitable for all scenarios. Use judiciously.

  Conclusion:
  - "Switch with Initializer" is a useful feature in C++17 that can enhance code clarity.
  - As with all language features, it should be used where it improves readability and
    maintainability.
*/
