#include<iostream> //the iostream header file containing the input output functions
using namespace std;

class sherlock{
    private:
       int x; //private data member type declaration.
       int y;
    public:
       int z; //declared this data member in the public part of the class , so that it can be used outside the class.
       void get_num(); //these are the member functions
       void print_num(); //the member functions have been declared in the public part of the class , so as to encapsulate the private data and the code and communicate with the rest of the program using only the public member functions. 
};
void sherlock :: get_num(){ //defining the member functions outside the class.
    cin>>z; // takes user input
};
void sherlock :: print_num(){ //2nd public member function.
    cout<<"the"<<""<<"no."<<""<<z<<"detective in the world"; //prints the user input.
};

//main_section(driver code)
int main(){
    sherlock s1; //here i have created a instance of the class (s1 is the objectname and sherlock is the classname)
    s1.get_num(); //here i called the public member functions
    s1.print_num(); //as these public member functions can be accessed outside the class declaration. 
    return 0; //successful termination of the code results in 0 error code.
}