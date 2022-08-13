//To check a number whether it is pallindrome or not using recursion
#include<iostream>
using namespace std;
int getreverse(int n,int rev){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    rev=rev*10+rem;
    return getreverse(n/10,rev);
}
int main(){
    int n,rev=0;
    cout<<"enter the number: ";
    cin>>n;
    if(getreverse(n,rev)==n){
        cout<<"pallindrome number";
    }
    else{
        cout<<"not a pallindrome number";
    }
}