#include <iostream>

using std::string;
using std::cout;

//Abstract classes
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee
{

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

    void AskForPromotion(){
        if(Age>30)
            cout << Name << " got promoted!" << std::endl;
        else
            cout << Name << " sorry no promotion to you" << std::endl;
    }
};

int main()
{
    //class object
    Employee employee1("Sam", "YT-coder", 25);

    Employee employee2("John", "Google", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
}