#include <iostream>
using namespace std;
#define AREA(l,b) (l*b)  //macros can also be used as functions                                                                                                                                                                                                                                  
#define LIMIT 5//"macro template" "macro expansion" //macros don't need semi colon
int x=0;
int b;
int main(){
    for (int i=0 ; i<LIMIT ; i++){
        //cout<<i<<"\n";
        x=x+i;
        b= AREA(x,i);
        cout<<"the area the corresponding triangles are:"<<b<<"\n";
    }
    return 0;
}  