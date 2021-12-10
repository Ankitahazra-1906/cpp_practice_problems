#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}