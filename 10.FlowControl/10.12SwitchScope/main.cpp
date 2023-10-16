#include <iostream>

int main()
{
    int condition{0};

    int my_var{4};

    switch (int data{7}; condition)
    {
        // int x{9}; // Never going to run as it does not live in a case
        int x;
        case 0:
            // int y {5}; // Won't compile
            int y;
            x = 6;
            x++;
            // z =6;
            std::cout << "x : " << x << std::endl;
            std::cout << "Statement1" << std::endl;
            std::cout << "Statement2" << std::endl;
            break;

        case 1:
            int z;
            my_var++;
            y = 5;
            std::cout << "y : " << y << std::endl;
            std::cout << "Statement3" << std::endl;
            std::cout << "Statement4" << std::endl;
            break;

        default:
            int u{5}; // Compiles
            z = 10;
            std::cout << "Statement5" << std::endl;
            std::cout << "Statement6" << std::endl;
            break;
    }
    std::cout << "Moving on..." << std::endl;

    return 0;
}

/*
  Switch Statement Scope in C++:

  Definition:
  - A switch statement in C++ allows you to execute different code blocks based on a variable's value.

  Scope Rules:
  - Variables declared within a case label are scoped to the switch statement block.
  - Enclosing a case block in braces {} limits the scope of variables to that case block only.

  Variable Initialization:
  - You cannot initialize variables directly in case labels without using braces. Attempting to do so will result in a
  compilation error.

  Example with Braces:
  switch (int x = getValue(); x) {
    case 1: {
      int y = x + 1;  // y is scoped to this case block
      break;
    }
    case 2: {
      int z = x + 2;  // z is scoped to this case block
      break;
    }
    default: {F
      int w = x + 3;  // w is scoped to this default block
    }
  }

  Example without Braces:
  switch (int x = getValue(); x) {
    case 1:
      // int y = x + 1;  // This would result in a compilation error
      break;
    case 2:
      // Code here
      break;
    default:
      int w = x + 3;  // w is scoped to the switch block
  }

  Considerations:
  - If you declare a variable in one case label without enclosing braces, it will be accessible in the following case
  labels, which can lead to unintended behavior.
  - Using braces for each case block makes the code more readable and avoids accidental fall-through, but they are not
  strictly necessary.

  Conclusion:
  - Understanding the scope rules in a switch statement is crucial for writing clear and bug-free code.
  - The use of braces is optional and depends on whether you want to limit the scope of variables to individual case
  blocks or allow them to be shared across multiple cases.
*/
