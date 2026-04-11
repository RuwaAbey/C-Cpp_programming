#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if-else statement
    // condition ? expression1 : expression2

    int grade = 75;

    if (grade > 75){
        std::cout << "You passed!" << std::endl;
    }
    else{
        std::cout << "You failed!" << std::endl;
    }

    return 0;

}