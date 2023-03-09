#include<iostream>
using namespace std;
int main(){
int num1,num2;
num1=10;
num2=20;
cout<<num1+num2<<endl;
cout<<num1-num2<<endl;
cout<<num1*num2<<endl;
cout<<num1/num2<<endl;
cout<<num1%num2<<endl; //note it is a integer division.
 //To break it down further, when we divide 10 by 20, we get a quotient of 0 and a remainder of 10. Therefore, the output of the statement cout<<num1%num2 will be 10.
int c;
c=++num1;
cout<<c<<endl;//11
c=num1+1;
cout<<c<<endl;//12
return 0;
}