//To find gcd or hcf of a number
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two nos.: ";
    cin>>n1>>n2;
    while (n1!=n2){
        if(n1>n2)
        n1-=n2;
        else
        n2-=n1;
    }
    cout<<"GCD is "<<n1;
        
    
}
