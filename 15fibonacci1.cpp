//fibbonacci series upto n-th term
#include<iostream>
using namespace std;
int main()
{
    int n,i, num1=0,num2=1,next_num;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<num1<<",";
            continue;

        }
        else if(i==2)
        {
            cout<<num2<<",";
            continue;
        }
        next_num=num1+num2;
        num1=num2;
        num2=next_num;
        cout<<next_num<<",";
    }
    return 0;


}
