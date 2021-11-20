//To check whether a number is pallindrome or not
#include<iostream>
using namespace std;
int main(){
    int n,num,rev=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    num=n;
    while(n!=0){
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    cout<<"The reverse number is: "<<rev<<endl;
    if(rev==num){
        cout<<"It is a pallindrome number."<<endl;
    }
    else
        cout<<"It is not a pallindrome number."<<endl;
    
}