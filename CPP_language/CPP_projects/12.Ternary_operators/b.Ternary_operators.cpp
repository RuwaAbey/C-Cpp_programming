#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if-else statement
    // condition ? expression1 : expression2

    //int grade = 75;

    //(grade >= 60) ? std::cout << "You passed!" << std::endl : std::cout << "You failed!" << std::endl;

    //int number = 4;
    //(number % 2 == 0) ? std::cout << "Number " << number << " is even" << std::endl : std::cout << "Number " << number << " is odd" << std::endl;

    bool hungry = false;
    //(hungry) ? std::cout << "You are hungry" << std::endl : std::cout << "You are full" << std::endl;
    std::cout << (hungry ? "You are hungry" : "You are full") << std::endl;

    return 0;

}