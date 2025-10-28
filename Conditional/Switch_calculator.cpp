#include<iostream>
using namespace std;
int main(){

// Create a calculator using Switch
    int a,b;
    char c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter arithematic operator: ";
    cin>>c;
    cout<<"Enter 2nd number: ";
    cin>>b;
    switch(c){
        case '+':
            cout<<a+b;
            break;         // Otherwise it will run all cases 
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
        cout<<"Invalid Operator";
    }

    return 0;
}