//To generate a fibonacci series upto a certain number
#include<iostream>
using namespace std;
int main()
{
    int n,num1=0,num2=1,next_num=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"Fibonacci series: "<<num1<<","<<num2<<",";
    next_num=num1+num2;
    while (next_num<=n)
    {
        cout<<next_num<<",";
        num1=num2;
        num2=next_num;
        next_num=num1+num2;
    }
    
}