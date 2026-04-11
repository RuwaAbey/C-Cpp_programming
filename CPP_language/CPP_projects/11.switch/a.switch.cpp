#include <iostream>

int main(){

    // switch = alternative to using many "else if" statements
    // compare one value against matching cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    if (month == 1){
        std::cout << "January" << std::endl;
    }
    else if (month == 2){
        std::cout << "Febraury" << std::endl;
    }
    else if (month == 3){
        std::cout << "March" << std::endl;
    }
    else if (month == 4){
        std::cout << "April" << std::endl;
    }
    else if (month == 5){
        std::cout << "May" << std::endl;
    }
    else if (month == 6){
        std::cout << "June" << std::endl;
    }
    else if (month == 7){
        std::cout << "July" << std::endl;
    }
    else if (month == 8){
        std::cout << "August" << std::endl;
    }
    else if (month == 9){
        std::cout << "September" << std::endl;
    }
    else if (month == 10){
        std::cout << "October" << std::endl;
    }
    else if (month == 11){
        std::cout << "November" << std::endl;
    }
    else if(month =12){
        std::cout << "December" << std::endl;
    }
    else{
        std::cout << "Invalid month" << std::endl;
    }
    
    

}