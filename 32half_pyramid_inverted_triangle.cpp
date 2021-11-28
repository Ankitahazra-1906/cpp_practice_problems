#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the no of lines: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"*";
        }
    cout<<"\n";
    }

}