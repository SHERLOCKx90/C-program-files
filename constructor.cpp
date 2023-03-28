#include<iostream>
using std:: string;
class abstractemployee{
    virtual void askforpromotion()=0; //abstract function //we will make this function obligatory so that any class that forces to sign the backend-enduser contract here, to implement this method (function)
}; //creation of an abstract employee class for data abstraction - if the employee requires promotion from the boss , then what logic will the boss apply.
class employee : abstractemployee{ //now the employee class can access the abstract employeeclass whenever required for promotion.
private: //private access specifiers (by default the access specifier is already set to private in c++ classes)
    string Name; //these are the public data members
    string Company;
    int Age;
public: //public access specifiers
    void setname(string name){ //public class method/ public member function to get the name of the user
        Name = name;
    }
    string getname(){ //gets the name value  from the setname function and returns the Name value to the required object call in the driver code of the program. 
        return Name; // this is how we  encapsulate the private data members and the public member functions.
    }
    void setcompany(string company){
        Company= company;
    }
    string setcompany(){
        return Company;
    }
    void setage(int age){
        if (age>=18)
        {
            Age= age;
        }
        
        //Age = age;
    }
    int getage(){
        return Age;
    }

    void introduceyourself(){  //deploying public class methods
        std::cout<<"name:"<<Name<<std::endl;
        std::cout<<"company :"<<Company<<std::endl;
        std::cout<<"age:"<<Age<<std::endl;
    }
    employee(string name, string company, int age){ //deploying contructors
        Name = name;
        Company = company;
        Age = age;
    }
    void askforpromotion(){ //the virtual function needs to be implemented in each of the classes which invokes the virtual member function of the abstract class.
        if (Age>30)
        {
            std:: cout << Name << "got promoted!"<<std:: endl;
        }
        else{
            std:: cout<< Name<<"sorry no promotion for you!"<<std::endl;
        }
        
    }
};
class developer:employee{ //developer class now has all the properties of the base class employee
public:
   string Favprogramminglanguage;
   developer(string name, string company, int age, string favprogramminglanguage)
       :employee(name, company, age){
        Favprogramminglanguage = favprogramminglanguage;
    }
    void fixbug(){
        std:: cout<<getname()<<"fixed bug using " <<Favprogramminglanguage<<std:: endl;
    }
}; //now the developer class becomes the child class of the employee class(which is the base class in this case)
int main(){
 std::cout<<"\n";
 //employee employee1 = employee("subhadeep chell","google",25); //creating a object of the class and calling the constructor
 ////employee1.name="subhadeep chell";
 ////employee1.company="google";
 ////employee1.age =25;
 ///*employee1.introduceyourself(); //calling the public class method.
 //employee1.setage(15);
 //employee1 = employee("rambo","google",35);
 //employee1.setname("Gourav");
 //employee1.setname("rambo");
 //std::cout<<employee1.getname()<<"is"<<employee1.getage()<<"years old";
 //
 //std::cout<<"\n";
 //std::cout<<"\n";
//
 //employee1.introduceyourself();
 //
 //std::cout<<"\n"; //used for spaces.
 //std::cout<<"\n";*/
//
 //employee employee2= employee("swarnali paul","nestle", 25);
 //employee2.name="swarnali paul";
 //employee2.company="nestle";
 //employee2.age =25;
 /*employee2.introduceyourself();

 std::cout<<"\n";*/

 //employee1.askforpromotion();
 //employee2.askforpromotion();
 developer d= developer("sherlock","deloitte",20,"c++");
 d.fixbug();

 
 //we dive into the four important topics of OOPS in C++
 //1. encapsulation: the idea of binding the data and the code(methods that operate on that data )
 //by encapsulation we are allowed to decide by ourselves which part of the code actually accesses our private data members.
 //2. abstraction: the process of hiding the complex data logic from the end user , through the creation and usage of a simple interface for the end user to handle it.
 //3. inheritance : there is a base class and thr derived classes .  for example in the developer class if we try to derive the private data member Name directly, then it will show an error , but if we want to access then we have to specify the access specifier as protected: which allows the data members of the base class to be inherited by the derived classes.
 return 0;
}