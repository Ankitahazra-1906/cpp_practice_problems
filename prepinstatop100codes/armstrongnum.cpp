#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int order(int x){
    int len=0;
    while(x){
        len++;
        x/=10;
    }
    return len;
}
bool armstrong(int n,int len){
    int sum=0,digit,temp;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum=sum+pow(digit,len);
        temp/=10;

    };
    return n==sum;
}
int main(){
    int n,len;
    cout<<"enter the number: ";
    cin>>n;
    len=order(n);
    if(armstrong(n,len)){
        cout<<"armstrong no";
    }
    else{
        cout<<"not armstrong no";
    }
}