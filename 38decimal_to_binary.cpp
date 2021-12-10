#include<iostream>
using namespace std;
void convertDecimalToBinary(int);
int main(){

    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"Decimal number= "<<n<<endl<<"Binary number= ";
    convertDecimalToBinary(n);
    return 0;
}
void convertDecimalToBinary(int n){
    int i=0;
    int binarynum[32];
    while(n>0){
        binarynum[i]=n%2;
        n/=2;
        i++;


    }
    for(int j=i-1;j>=0;j--){
        cout<<binarynum[j];
    }
    
    
    
}