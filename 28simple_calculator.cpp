#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"Enter the operation: ";
    cin>>op;
    switch(op){
        case '+':
        cout<<n1<<"+"<<n2<<" = "<<n1+n2;
        break;
        case '-':
        cout<<n1<<"-"<<n2<<" = "<<n1-n2;
        break;
        case '*':
        cout<<n1<<"*"<<n2<<" = "<<n1*n2;
        break;
        case '/':
        cout<<n1<<"/"<<n2<<" = "<<n1/n2;
        break;
        default:
        cout<<"Invalid operator!!";
        break;

    }

}