//Check whether a number is armstrong or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=0,num,original_num,sum=0,rem;
    cout<<"Enter a positive integer: ";
    cin>>num;
    original_num=num;
    while(original_num!=0){
        original_num/=10;
        n++;
       
    }
    original_num=num;
    while(original_num!=0){
        rem=original_num%10;
        sum=sum + pow(rem,n);
        original_num/=10;


    }
    if(num==sum){
        cout<<"Its an armstrong number";
    }
    else{
        cout<<"Its not an armstrong number";
    }
}