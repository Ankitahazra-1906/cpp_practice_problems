//To find lcm of two nos
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,gcd,temp;
    cout<<"Enter two nos.: ";
    cin>>n1>>n2;
    temp=n1*n2;

    while (n1!=n2){
        if(n1>n2)
        n1-=n2;
        else
        n2-=n1;
    }
    gcd=n1;
    cout<<"L.C.M is "<<temp/gcd;
        
    
}