#include<iostream>
#include<cmath>
using namespace std;
int power(int a,int b){
    if(b!=0){
        return(a*power(a,(b-1)));

    }
    return 1;
    


}
int main(){
    int a,b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the exponent: ";
    cin>>b;
    cout<<"The required answer is "<<power(a,b);
    return 0;
}