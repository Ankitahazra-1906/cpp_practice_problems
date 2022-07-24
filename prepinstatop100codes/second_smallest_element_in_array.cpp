//To find the second smallest element in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int min_element=INT_MAX;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<min_element){
            min_element=a[i];
        }
    }
    int second_min_element=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]!=min_element && a[i]<second_min_element){
            second_min_element=a[i];
        }
    }
    cout<<second_min_element<<endl;
}