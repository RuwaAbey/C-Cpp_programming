#include <iostream>

using std::string;
using std::cout;

class Employee{

private: //by default, all members of a class are private
    string Name;
    string Company;
    int Age;

public:

    //Encapsulation
    //************************
    void setName(string name){ //setter
        Name = name;
    }

    string getName(){ //getter
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        //validation rule for setter method
        if (age >= 18){
            Age = age;
        }
    }

    int getAge(){
        return Age;
    }
    //*************************

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

    //employee1.Name = "Sarah"; //error: 'std::string Employee::Name' is private within this context
    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old and works at " << employee1.getCompany() << std::endl;
}