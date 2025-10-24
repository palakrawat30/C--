#include<iostream>
using namespace std;
int main(){

// DIVISIBLE BY 5 or 3 and not by 15 OR NOT
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>=0){
        if((a%5==0 || a%3==0) && a%15!=0) cout<<"It is divisible by 5 or 3 but not 15";
        else cout<<"It is divisible by 5 or 3 and 15";
    }
    else cout<<"Provide a positive integer";

    return 0;
}