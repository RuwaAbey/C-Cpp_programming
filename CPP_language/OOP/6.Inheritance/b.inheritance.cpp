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
    string Company;
    int Age;
protected: //protected members can be accessed by derived classes
    string Name;
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
    //Once we create a constructor, the default constructor is no longer available 
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


//This class inherits Emplpoyee class
//child class/sub class/ derived class   : parent class/ base class / super class
//Inheritcance also private by default
class Developer:public Employee{
    public:
        string FavProgrammingLanguage;

        Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name, company, age){
            FavProgrammingLanguage = favProgrammingLanguage;
        }

        void FixBug(){
            std::cout  << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        }
    
};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){

        cout << Name << " is preapring " <<  Subject << " lesson" << std::endl;
    }
    Teacher(    string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
};

int main()
{
    //class object
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();
}