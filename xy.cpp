#include<iostream>
using namespace std;
class train{
    private:
        int pnr;
        char name[30];
        int age;
        char sex[20];
        int ph;
    public:
        void gen_tic();
        void display();
};
void train::gen_tic(){
    cout<<"enter passenger name:"<<endl;
    cin>>name;
    cout<<"enter passenger age:"<<endl;
    cin>>age;
    cout<<"enter passenger gender:"<<endl;
    cin>>sex;
    cout<<"enter passenger phone no."<<endl;
    cin>>ph;
};
 void train::display(){
    cout<<"passenger  name:"<<name;
    cout<<"passenger age:"<<age;
    cout<<"passenger gender:"<<sex;
    cout<<"passenger ph.no"<<ph;
};
int main(){
    train t1;
    t1.gen_tic();
    t1.display();
    return 0;
}