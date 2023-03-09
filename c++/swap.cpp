#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"hence the value is swaped "<<endl<<"a="<<a<<endl<<"b="<<b;;
    return 0;

}