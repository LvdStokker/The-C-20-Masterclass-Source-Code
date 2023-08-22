#include <iostream>

int main()
{
    constexpr bool condition{false};

    if constexpr (condition)
    {
        std::cout << "Condition is true" << std::endl;
    }
    else
    {
        std::cout << "Condition is false" << std::endl;
    }
    return 0;
}

/*
  if constexpr in C++:

  Definition:
  - Introduced in C++17, `if constexpr` is a compile-time conditional statement. It allows
    the compiler to conditionally compile code based on a constant expression.

  Syntax:
  - if constexpr (condition) { // code if condition is true } else { // code if condition is false }

  Example:
  - template<typename T>
    void printType(T value) {
        if constexpr (std::is_integral_v<T>) {
            std::cout << "Integral type: " << value << std::endl;
        } else {
            std::cout << "Non-integral type: " << value << std::endl;
        }
    }

  Rules and Considerations:
  - Compile-time Condition: The condition inside `if constexpr` must be a constant expression,
    meaning it must be evaluable at compile time.
  - Code Elimination: The branch that doesn't match the condition is discarded by the compiler,
    ensuring that only valid code for the given type or condition is compiled.
  - Simplifies Templates: `if constexpr` is particularly useful in template metaprogramming,
    allowing for cleaner and more readable code by eliminating the need for complex template
    specializations or SFINAE techniques.
  - No Runtime Overhead: Since the decision is made at compile time, there's no runtime overhead
    associated with `if constexpr`.

  Practical Applications:
  - Differentiating code paths based on type traits in templates.
  - Compile-time computations and decisions in constexpr functions or classes.

  Conclusion:
  - `if constexpr` provides a powerful tool for making compile-time decisions in C++ code.
  - It simplifies template code, reduces the need for complex metaprogramming techniques,
    and ensures type-safe and efficient code generation.
*/

/*
  SFINAE in C++:

  Definition:
  - SFINAE stands for "Substitution Failure Is Not An Error." It is a principle in C++ template
    metaprogramming that allows the compiler to discard a templated function or class from the
    set of potential candidates based on whether the type substitution would result in a valid
    instantiation.

  How it Works:
  - When the compiler attempts to instantiate a template with a given set of arguments, it tries
    to substitute those arguments into the template. If the substitution leads to an invalid
    code (like a type mismatch or an invalid function call), instead of producing a compile-time
    error, the compiler simply discards that instantiation from consideration.

  Common Usage:
  - Function Overloading: SFINAE is often used with function templates to enable or disable
    certain overloads based on type traits or other compile-time conditions.
  - Type Traits: SFINAE can be used to determine properties of types, like checking if a class
    has a specific member function.

  Example:
  - template<typename T>
    auto length(const T& t) -> decltype(t.length()) {
        return t.length();
    }

  - template<typename T>
    auto length(const T& t) -> decltype(sizeof(t)) {
        return sizeof(t);
    }

  In the above example, the first `length` function template will be considered only if `T` has
  a member function named `length`. Otherwise, the second `length` function template will be used.

  Considerations:
  - Complexity: SFINAE can lead to complex and hard-to-read code, especially when used extensively.
  - Modern Alternatives: With the introduction of features like `if constexpr` in C++17, some
    traditional SFINAE use-cases can be achieved more readably.

  Conclusion:
  - SFINAE is a powerful technique in C++ template metaprogramming that allows for conditional
    compilation based on type properties.
  - While powerful, it should be used judiciously to maintain code clarity and readability.
*/

