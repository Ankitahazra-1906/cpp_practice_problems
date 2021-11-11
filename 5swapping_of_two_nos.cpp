/*To find the swap of two nos*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two nos: ";
    cin>>a>>b;
    cout<<"Before swapping:"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
