//To print the fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,next;
    cout<<"enter the number: ";
    cin>>n;
    cout<<a<<" , "<<b<<" , ";
    for(int i=2;i<n;i++){
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" , ";

        
    }
}