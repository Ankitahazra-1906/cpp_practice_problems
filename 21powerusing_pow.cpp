#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,exponent,ans;
    cout<<"Enter a base number: ";
    cin>>base;
    cout<<"Enter a exponent: ";
    cin>>exponent;
    ans=pow(base,exponent);
    cout<<"ANS= "<<ans;

}