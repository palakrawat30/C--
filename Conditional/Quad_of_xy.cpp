#include<iostream>
using namespace std;
int main(){

// Check quadrant of two points
    int x,y;
    cout<<"Enter value of x : ";
    cin>>x;
    cout<<"Enter value of y : ";
    cin>>y;
    if(x>0 && y>0) cout<<"1st Quadrant";
    else if(x<0 && y>0) cout<<"2nd Quadrant";
    else if(x<0 && y<0) cout<<"3rd Quadrant";
    else if(x>0 && y<0) cout<<"4th Quadrant";
    else if(x==0 && (y>0 || y<0)) cout<<"on y-axis";
    else if(y==0 && (x>0 || x<0)) cout<<"on x-axis";
    else if(x==0 && y==0) cout<<"at origin";

    return 0;
}