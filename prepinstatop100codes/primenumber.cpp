//check whether a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<n+1;i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(n==0 || n==1){
        cout<<n<< " is not a prime number";
    }
    else if(count>2){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }

}