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

    //constructor 
    //1.Constructor should have the same name as the class
    //2.Constructor does not have a return type
    //3.Constructor should be public
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    //class object
    Employee employee1("Sam", "YT-coder", 25);
    employee1.IntroduceYourself();

    Employee employee2("John", "Google", 35);
    employee2.IntroduceYourself();
}