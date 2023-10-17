// Assignment 7 - Day difference
#include <iostream>

int main()
{
    int today{}, days_ago{};
    std::cout << "Which day is today [1: Monday, ..., 7: Sunday] : " << std::endl;
    std::cin >> today;
    if (today < 1 || today > 7)
    {
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0; // End program early.
    }
    std::cout << "How many days have past up to today : " << std::endl;
    std::cin >> days_ago;
    int past_day = today - days_ago % 7;
    if (past_day < 1)
    {
        past_day += 7;
    }

    // Print todays day.
    switch (today)
    {
        case 1:
        {
            std::cout << "Today is Monday." << std::endl;
        }
        break;
        case 2:
        {
            std::cout << "Today is Tuesday." << std::endl;
        }
        break;
        case 3:
        {
            std::cout << "Today is Wednesday." << std::endl;
        }
        break;
        case 4:
        {
            std::cout << "Today is Thursday." << std::endl;
        }
        break;
        case 5:
        {
            std::cout << "Today is Friday." << std::endl;
        }
        break;
        case 6:
        {
            std::cout << "Today is Saturday." << std::endl;
        }
        break;
        case 7:
        {
            std::cout << "Today is Sunday." << std::endl;
        }
        break;
            // No need for default as we handled the error checking.
    }
    // Print day in the past.
    switch (past_day)
    {
        case 1:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Monday." << std::endl;
        }
        break;
        case 2:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Tuesday." << std::endl;
        }
        break;
        case 3:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Wednesday." << std::endl;
        }
        break;
        case 4:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Thursday." << std::endl;
        }
        break;
        case 5:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Friday." << std::endl;
        }
        break;
        case 6:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Saturday." << std::endl;
        }
        break;
        case 7:
        {
            std::cout << "If we went " << days_ago << " days in the past we would hit a Sunday." << std::endl;
        }
        break;
            // Don't need a default as the result will always be between 1 and 7
    }
    return 0;
}