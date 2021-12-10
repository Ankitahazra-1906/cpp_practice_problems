#include<iostream>
#include<cmath>
using namespace std;
int convertBinaryToDecimal(int);

int main(){

    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    
    cout<<"Binary number= "<<n<<endl<<"Decimal number= "<<convertBinaryToDecimal(n)<<endl;
    
    
    return 0;
}
int convertBinaryToDecimal(int n){

    int i=0,rem,decimalnum=0;
    while(n!=0){

        rem=n%10;
        n/=10;
        decimalnum+=rem*pow(2,i);
        ++i;

    }
    return decimalnum;

}
