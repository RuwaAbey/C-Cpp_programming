#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age == 18){
        std::cout << "WELCOME to the site!" << std::endl;
    }else if (age < 0){
        std::cout << "You have not been born yet" << std::endl;
    }else if(age > 100){
        std::cout << "You are too old to enter" << std::endl;
    }
    else {
        std::cout << "SORRY, you are not older enough to enter" << std::endl;
    }

    return 0;


}