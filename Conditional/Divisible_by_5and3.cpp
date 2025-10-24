#include<iostream>
using namespace std;
int main(){

// DIVISIBLE BY 5 and 3 OR NOT
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>=0){
        if(a%5==0 && a%3==0) cout<<"It is divisible by 5 and 3";
        else cout<<"It is not divisible by 5 and 3";
    }
    else cout<<"Provide a positive integer";

    return 0;
}