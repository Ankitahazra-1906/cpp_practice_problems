//To calculate the sum of elements in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];

    }
    cout<<sum<<endl;
}