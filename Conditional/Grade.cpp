#include<iostream>
using namespace std;
int main(){

// Grade of students according to marks
    int n;
    cout<<"Enter percentage of a student : ";
    cin>>n;
    if(n>80 && n<=100) cout<<"Very Good";
    else if(n>60 && n<=80) cout<<"Good";
    else if(n>40 && n<=60) cout<<"Average";
    else cout<<"Fail";

    return 0;
}