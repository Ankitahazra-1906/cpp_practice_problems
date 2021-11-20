//To check whether the number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool prime=true;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n==0 || n==1){
        prime=false;
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                prime=false;
                break;
            }

        }
    }
    if(prime){
        cout<<"Its a prime number";
    }
    else
        cout<<"Its not a prime number";
}