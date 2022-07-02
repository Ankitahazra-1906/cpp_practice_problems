#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int one=0,two=0;
    int five=(n-4)/5;
    if((n-(5*five))%2==0){
        one=2;
    }
    else{
        one=1;
    }
    two=(n-5*five-one)/2;
    cout<<one+two+five<<" ";
    cout<<one<<" ";
    cout<<two<<" ";
    cout<<five<<" ";
}