#include <iostream>

int main()
{
    char grade;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!" << std::endl;
            break;
        case 'B':
            std::cout << "You did good!" << std::endl;
            break;
        case 'C':
            std::cout << "You did okay!" << std::endl;
            break;
        case 'D':
            std::cout << "You did not do well!" <<  std::endl;
            break;
        case 'F':
            std::cout << "You failed!" << std::endl;
            break;
        default:
            std::cout << "Please enter a letter grade (A-F)" << std::endl;
            break;
    }

    return 0;


}