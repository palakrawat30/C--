#include<iostream>
using namespace std;
int main(){

// Even odd using ternary operator
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    (n%2==0) ? cout<<"Even" : cout<<"Odd";

    return 0;
}