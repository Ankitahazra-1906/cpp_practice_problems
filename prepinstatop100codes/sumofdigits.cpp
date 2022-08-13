//To print the sum of digits of  a number
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number ";
    cin>>n;
    while(n!=0){
        sum+=n%10;
        n=n/10;
        
    }
    cout<<"sum of digits is "<<sum;

}