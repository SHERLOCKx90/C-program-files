#include<iostream>
using namespace std;

//creating a class
class art(){
    private:
       int x;
    public:
       char z[30];
       void get_name();
       void print_name();
};
void art::get_name(){
    cin>>z;
};
void art::print_name(){
    cout<<"my name is"<<z;
};

int main()//driver code
{
 art a1;
 a1.get_name();
 a1.print_name();
 return 0;
}