#include<iostream>
using namespace std;
int main(){
    int exp1=true;                       //bool exp1=1
    int exp2=false;                      //bool exp2=0
    cout<<(exp1&&exp2)<<endl;//0
    cout<<(exp1||exp2)<<endl;//1
    cout<<(!exp1)<<endl;//0
    return 0;
}