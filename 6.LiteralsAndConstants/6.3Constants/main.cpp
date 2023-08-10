#include <iostream>

int main()
{
    // const vars are protected at language level not memory level. Theoretically
    // you could modify the same memory block via a different variable but C++ protects
    // against this

    const int age{34};
    const float height{1.67f};

    // age = 55; // Can't modify
    // height = 1.8f;

    int years{3 * age};

    std::cout << "age : " << age << std::endl;
    std::cout << "height : " << height << std::endl;
    std::cout << "years : " << years << std::endl;

    // Luke
    // The 'const' Keyword in C++:
    // - Immutability: Declares values that should not be modified.
    // - Readability: Enhances code clarity by signaling constant values.
    // - Safety: Catches attempts to modify constant values at compile time.
    // - Optimization: May enable compiler optimizations.
    // - Function Signatures: Indicates member functions that do not modify the object.
    // - Pointer and Reference Semantics: Controls access and modification of pointed-to data.
    // Rules and Nuances:
    //   - Initialization: A 'const' variable must be initialized at the time of declaration.
    //   - Member Functions: A 'const' member function cannot modify non-static members or call non-const member
    //   functions.
    //   - Pointers: 'const int* ptr;' means ptr points to a constant int (ptr can change, value cannot).
    //               'int* const ptr;' means ptr is a constant pointer to an int (ptr cannot change, value can).
    //               'const int* const ptr;' means ptr is a constant pointer to a constant int (neither can change).
    //   - References: 'const int& ref;' creates a reference to a constant int (value cannot be changed through ref).
    //   - Casting: 'const_cast' can be used to remove 'const' but should be used with caution.
    // Examples:
    //   Constant Variable: const int maxUsers = 100;
    //   Constant Member Function: void display() const;
    //   Constant Pointer: const int* ptr; (or int const* ptr;)
    //   Pointer to Constant: int* const ptr;
    // Use 'const' to make code more robust, readable, and maintainable, and to express clear intent.
    // Follow the rules to ensure correct behavior and avoid undefined behavior.

    return 0;
}