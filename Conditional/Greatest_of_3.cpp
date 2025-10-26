#include<iostream>
using namespace std;
int main(){

// Greatest among 3 numbers
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a>=0 and b>=0 and c>=0){
        if(a>b && b>c) cout<<"1st number is greater.";
        else if(b>a && b>c) cout<<"2nd number is greater.";
        else cout<<"3rd number is greater.";
    }
    else cout<<"Provide a positive integer";

    return 0;
}