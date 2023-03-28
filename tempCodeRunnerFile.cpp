#include<iostream>
using namespace std;
class A{
    public:
      void show(){
          cout<<"hello from A\n";
      }
};
class B: public A{
};
class C: public A{    
};
class D: public B, public C{
};
//main_section
int main()
{
    D object;
    return 0;
}