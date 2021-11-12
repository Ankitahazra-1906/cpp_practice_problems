//To find sum of first n natural number
#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter a positive integer:  ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<"sum= "<<s<<endl;

    
}