#include <iostream>

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

    if (tool == Pen)
    {
        std::cout << "Active tool is pen" << std::endl;
        // Do the actual painting
    }
    else if (tool == Marker)
    {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser)
    {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle)
    {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle)
    {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse)
    {
        std::cout << "Active tool is Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}

// Luke
/*
  Else If Statement in C++:

  - Used in conjunction with an if statement to test multiple conditions in sequence.
  - Allows for more complex decision-making by providing additional conditions to test if the initial condition is
  false.

  Syntax:
    if (condition1) {
      // Code to execute if condition1 is true
    } else if (condition2) {
      // Code to execute if condition1 is false and condition2 is true
    } else {
      // Code to execute if both condition1 and condition2 are false
    }

  Rules and Considerations:
  - Order of Evaluation: Conditions are evaluated in order, and the first true condition's block is executed.
  - Short-Circuiting: Once a true condition is found, subsequent conditions are not evaluated.
  - Braces: Using braces for each block improves readability and helps prevent errors, even if the block contains only
  one statement.
  - Multiple Else If: You can include multiple else if blocks to test additional conditions.

  Practical Applications:
  - Implementing multi-way decisions based on the evaluation of several conditions.
  - Controlling the flow of a program by executing different code paths based on a series of conditions.

  Conclusion:
  - The else if construct extends the functionality of if-else statements in C++.
  - It enables more nuanced decision-making by allowing for the sequential testing of multiple conditions.
  - Careful consideration of condition logic, order of evaluation, and code organization leads to robust and
  maintainable code.
*/
