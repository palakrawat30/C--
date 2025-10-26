#include<iostream>
using namespace std;
int main(){

// To Check if the seller made profit or loss
    int cp,sp;
    cout<<"Cost Price : ";
    cin>>cp;
    cout<<"Selling Price : ";
    cin>>sp;
    if(cp<sp) cout<<"Profit : Rs. "<<sp-cp;
    else if(cp>sp) cout<<"Loss : Rs. "<<cp-sp;
    else cout<<"No Loss/ No Profit";

    return 0;

}