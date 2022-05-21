#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        int k=i+1;
        for(int j=0;j<i+1;j++){
            cout<<k++;

        }
        k=2*i;
        for(int j=0;j<i;j++){
            cout<<k--;
        
        }
    cout<<endl;
    }

}