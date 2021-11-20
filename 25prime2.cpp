//To display prime numbers between two intervals
#include<iostream>
using namespace std;
int main(){
    int n1,n2,i;
    bool prime=true;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2 <<" is: "<<endl;
    while(n1<n2){
        prime=true;
        if(n1==0|| n1==1){
            prime=false;

        }
        else{
            for(i=2;i<=n1/2;i++){
                if(n1%i==0){
                    prime=false;
                    break;
                }
            }
        }
        if(prime)
            cout<<n1<<" ";
        ++n1;
        
    }
}