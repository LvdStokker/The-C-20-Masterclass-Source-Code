#include <iostream>

int global_var1{23}; // global variable

void some_function()
{
    int local_var{10};
    std::cout << "Inside function global_var : " << global_var1 << std::endl;
    std::cout << "Inside function local_var : " << local_var << std::endl;
}

void some_other_function()
{
    // local_var = 5; --> wont compile (out of scope)
}

int main()
{
    std::cout << "Inside main function global_var : " << global_var1 << std::endl;
    // local_var = 5; --> wont compile (out of scope)

    return 0;
}

// Luke
/*
  Variable Lifetime and Scope in C++:

  1. Variable Lifetime:
     - Automatic (Local) Lifetime:
       - Variables declared within a function, loop, or other code block have automatic or local lifetime.
       - They are created when the block is entered and destroyed when the block is exited.
       - This automatic management of memory helps prevent resource leaks.
     - Dynamic Lifetime:
       - Created on the heap using 'new' and must be explicitly destroyed using 'delete'.
     - Static Lifetime:
       - Exist for the duration of the program.

  2. Variable Scope:
     - Local Scope:
       - Variables with local scope are accessible only within the specific block where they are declared.
       - They are hidden from the outside code, promoting encapsulation.
     - Global Scope:
       - Variables declared outside all functions are accessible throughout the file.
     - Class Scope:
       - Member variables are accessible within the class and its methods.
     - Namespace Scope:
       - Variables declared within a namespace are accessible within that namespace.

  Rules and Considerations:
  - Initialization: Always initialize variables to prevent undefined behavior.
  - Shadowing: A variable in a nested scope can shadow a variable in an outer scope, potentially leading to confusion.
  - Resource Management: Properly manage resources for dynamic variables to prevent memory leaks.
  - Access Modifiers: Use access modifiers in classes to control access to member variables.
  - Const Correctness: Use 'const' to indicate variables that should not be modified.

  Practical Applications:
  - Understanding local lifetime and scope helps in writing modular and maintainable code.
  - Proper lifetime management ensures efficient use of resources and prevents errors.

  Conclusion:
  - Variable lifetime and scope are essential concepts in C++ programming.
  - Careful consideration of these concepts, including local lifetime and scope, leads to robust, efficient, and
  maintainable code.
  - Always be mindful of initialization, shadowing, resource management, and appropriate use of modifiers.
*/
