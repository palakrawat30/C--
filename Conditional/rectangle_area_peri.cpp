#include<iostream>
using namespace std;
int main(){

// Weither the area of the rectangle is greater the perimeter or not
    float len,w,peri,area;
    cout<<"Length of Ractangle : ";
    cin>>len;
    cout<<"Width of Ractangle : ";
    cin>>w;
    peri=2*(len+w);
    area=len*w;
    if(area>peri) cout<<"Area is greater than perimeter.";
    else if(area==peri) cout<<"Area is equal to perimeter.";
    else cout<<"Area is not greater than perimeter.";

    return 0;
}