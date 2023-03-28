#include<iostream>
using namespace std;
class T4Tutorials
{
public :
T4Tutorials();
~T4Tutorials();
void read();
};
T4Tutorials::T4Tutorials()
{
cout<<endl;
}
void T4Tutorials::read()
{
{
cout<<"enter the value";
int n;
cin>>n;
int s=0;
int t=1,i=1;
for(i=1;i<=n;i++)
{
cout<<" "<<t<<" ";
if (i<n)
{
cout<<"+";    
}
s=s+t;
t=(t*10)+1;
}
cout<<endl<<"The sum is :"<<s;
}
}
T4Tutorials::~T4Tutorials()
{
cout<<endl<<"detail is clear";
}
int main()
{
T4Tutorials u;
u.read();
}
