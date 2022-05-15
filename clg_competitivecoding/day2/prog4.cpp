#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    (n<=9)?
    cout<<arr[n-1]:cout<<"greater than 9"<<endl;
    return 0;
}