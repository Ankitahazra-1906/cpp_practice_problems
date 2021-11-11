//To find all the roots of a quadratic equation
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,root1,root2,discriminant,realpart,imaginarypart;
    cout<<"Enter the coefficients of a,b and c: ";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    if (discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        cout<<"root1= "<<root1<<endl;
        cout<<"root2= "<<root2<<endl;
        cout<<"Roots are real and different"<<endl;
    }
    else if(discriminant==0)
    {
        root1=-b/(2*a);
        cout<<"root1=root2= "<<root1<<endl;
        cout<<"Roots are real and same";

    }
    else
    {
        realpart=-b/(2*a);
        imaginarypart=sqrt(-discriminant)/(2*a);
        cout<<"root1= "<<realpart<<" + "<< imaginarypart<<"i"<<endl;
        cout<<"root2= "<<realpart<<" - "<<imaginarypart<<"i"<<endl;
        cout<<"Roots are complex and different"<<endl;
    }
}