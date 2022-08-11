//Printing prime number between a range
#include<iostream>
using namespace std;
bool isPrime(int n){
    int count=0;
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int lower,upper;
    cout<<"Enter ther and upper limit: ";
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
}