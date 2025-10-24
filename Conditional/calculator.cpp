#include<iostream>
using namespace std;
int main(){

// Create a calculator
    int a,b;
    char c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter arithematic operator: ";
    cin>>c;
    cout<<"Enter 2nd number: ";
    cin>>b;
    if(c=='+') cout<<a+b;
    else if(c=='-') cout<<a-b;
    else if(c=='*') cout<<a*b;
    else if(c=='/') cout<<a/b;

    return 0;
}