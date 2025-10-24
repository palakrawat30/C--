#include<iostream>
using namespace std;
int main(){

// DIVISIBLE BY 5 OR NOT
    int a;
    cin>>a;
    if(a>=0){
        if(a%5==0){
            cout<<"Divisible by 5";
        }
        else{
            cout<<"Not Divisible by 5";
        }
    }
}