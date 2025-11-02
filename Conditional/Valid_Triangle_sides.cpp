#include<iostream>
using namespace std;
int main(){

// Take 3 numbers input and check if they can sides of a triangle or not
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a) cout<<"They can be sides of a triangle";
    else cout<<"They can not be sides of a triangle";

    return 0;
}