#include<iostream>
using namespace std;

class fruit{
   private:
      char x[30];
   public:
      //char y[20];
      void get_fruit_name(){
         cin>>x;
      };
      void check_fruit(char x){
        if (x=="apple")
        {
           cout<<"it is a more or less sweet fruit";
        }
     };
};
//main_section
int main(){
   fruit f1;
   f1.get_fruit_name();
   f1.check_fruit();
};