#include <iostream>

int global_var{44};

int main()
{
    bool green{false};

    global_var++; // 45

    if (green)// if we init car_count here then it will also be visible in the else condition
    {
        global_var++;
        int car_count{23}; // Only exists in this scope
        std::cout << "Light is green " << car_count << "on the move!" << std::endl;
    }
    else
    {
        // car_count++; // Compiler error
        global_var++; // 46
        std::cout << "Light is not green. Y'all should STOP!" << std::endl;
    }

    // car_count++;
    std::cout << "global_var : " << global_var << std::endl;

    return 0;
}