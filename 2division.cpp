#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter dividend: ";
    cin>>a;
    cout<<"Enter divisor: ";
    cin>>b;
    c=a/b;
    d=a%b;
    cout<<"The quotient is "<<c<<" and the remainder is "<<d<<"."<<endl;
}