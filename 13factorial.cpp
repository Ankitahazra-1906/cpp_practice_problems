//To find the factorial of a given number
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long double f=1;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"Factorial of the number "<<n<<" is "<<f<<endl;
    return 0;
}