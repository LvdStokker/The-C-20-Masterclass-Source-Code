#include <iostream>

const int val1{33};
constexpr int val2{34};
int val3{35}; // Run time value

constinit int age = 88;         // This is initialized at compile time
const constinit int age1{val1}; // const and constinit can be combined
constinit int age2{age1};       // Initializing with age would lead to a compiler error
                                // age is not const
// constinit int age3 {val3}; // Error : val3 is evaluated at run time
//  can't const initialize age3

const constinit double weight{33.33};

// constexpr constinit double scale_factor{3.11};// Can't combine constexpr and constinit

int main()
{
    // constinit double height{1.72};

    std::cout << "age : " << age << std::endl;
    std::cout << "age1 : " << age1 << std::endl;
    std::cout << "age2 : " << age2 << std::endl;

    age = 33; // Can change a const init variable
    std::cout << "age : " << age << std::endl;

    // Combining const and constinit
    std::cout << "weight : " << weight << std::endl;
    // weight = 44.44; // Compiler error

    return 0;
}

// Luke
//  The 'constinit' Keyword in C++20:
//  - Static Initialization: Ensures initialization during the static initialization phase (compile time or program
//  start).
//  - Not Necessarily 'const': The variable can be modified after initialization.
//  - Compile-Time Check: If not statically initialized, the code will not compile.
//  - Usage: Typically for global or static variables.
//  Rules:
//    - Initialization: Must be initialized with a value computable during static initialization.
//    - Not for Local Variables: Cannot be used with local variables inside functions.
//    - Not 'const' or 'constexpr': Only ensures static initialization.
//  Examples:
//    Global Variable: constinit int globalVar = 5;
//    Static Member Variable: static constinit std::string name = "Example";
//  'constinit' enforces static initialization, ensuring that variables are initialized at compile time or program
//  start.
