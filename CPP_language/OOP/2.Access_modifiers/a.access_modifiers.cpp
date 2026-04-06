#include <iostream>

using std::string;
using std::cout;

class Employee{
    //blueprint
public:
    string Name;
    string Company;
    int Age;

    //class method
    void IntroduceYourself(){
        cout << "Name: " << Name << std::endl;
        cout << "Company: " << Company << std::endl;
        cout << "Age: " << Age << std::endl;
    }
};

int main()
{
    //class object
    Employee employee1;
    employee1.Name = "Sam";
    employee1.Company = "YT-coder";
    employee1.Age = 25;
    employee1.IntroduceYourself();


}