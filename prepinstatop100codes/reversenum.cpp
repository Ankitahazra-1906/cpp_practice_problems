//To print reverse of a number
#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0){
        rev=n%10;
        n=n/10;
        cout<<rev;
    }
}