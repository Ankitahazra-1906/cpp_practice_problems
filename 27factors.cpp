//To display all the factors of a given number
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"Factors of the number "<<n<<" are "<<endl;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}