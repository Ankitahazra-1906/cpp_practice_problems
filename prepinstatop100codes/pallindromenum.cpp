//To check a number whether it is pallindrome or not
#include<iostream>
using namespace std;
int main(){
    int n,rem,rev,temp;
    cout<<"enter the number: ";
    cin>>n;
    temp=n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;

    }
    if(temp==rev){
        cout<<"pallindrome number";
    }
    else{
        cout<<"not a pallindrome number";
    }
}