#include<iostream>
using namespace std;
int main(){
    int n ,i;
    float num[200],sum,average;
    cout<<"Enter the numbers of data: ";
    cin>>n;
    if(n>200 || n<=0){
        cout<<"Error! It shoud be in range from 1 to 200"<<endl;
        cout<<"Enter the number again: ";
        cin>>n;
    }
    for(i=0;i<n;++i){
        cout<<i+1<<". Enter the number: ";
        cin>>num[i];
        sum+=num[i];
    }
    average=sum/n;
    cout<<"Average: "<<average;

}