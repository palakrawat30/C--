#include<iostream>
using namespace std;
int main(){

// If a number is 3 digit or not
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>=0){
        if(a>99 && a<1000) cout<<"It is a three digit number";
        else cout<<"It is not a three digit number";
    }
    else cout<<"Provide a positive integer";

    return 0;
}