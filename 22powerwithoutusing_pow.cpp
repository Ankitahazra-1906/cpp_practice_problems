#include<iostream>
using namespace std;
int main(){
    int base,exponent,ans=1;
    cout<<"Enter a base number: ";
    cin>>base;
    cout<<"Enter a exponent: ";
    cin>>exponent;
    while(exponent!=0){
        ans*=base;
        --exponent;

    }
    cout<<"ANS= "<<ans;
}