#include <iostream>
#include <cmath>

int main(){

    double x;
    double y;

    std::cout << "Enter the length of first side: " ;
    std::cin >>    x;

    std::cout << "Enter the length of second side: ";
    std::cin >> y;

    std::cout << "Hypotenuse: " << sqrt(pow(x,2) + pow(y,2)) << std::endl;

    return 0;

}