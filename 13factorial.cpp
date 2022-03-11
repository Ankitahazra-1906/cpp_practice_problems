//To find the factorial of a given number
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long double fa=1;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fa*=i;
    }
    cout<<"Factorial of the number "<<n<<" is "<<fa<<endl;
    return 0;
}
