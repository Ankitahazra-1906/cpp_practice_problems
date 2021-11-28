#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the no of rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<=n){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}