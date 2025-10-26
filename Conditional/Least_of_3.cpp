#include<iostream>
using namespace std;
int main(){

// Least among 3 numbers
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a>=0 and b>=0 and c>=0){
        if(a>c && b>c) cout<<"3rd number is Least.";
        else if(b>a && c>a) cout<<"1st number is Least.";
        else cout<<"2nd number is Least.";
    }
    else cout<<"Provide a positive integer";

    return 0;
}