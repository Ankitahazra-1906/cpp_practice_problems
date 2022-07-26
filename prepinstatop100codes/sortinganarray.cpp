//To sort the elements in an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void sorting_method1(int n,int a[]){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}*/
void sorting_method2(int n,int a[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
               
            }
            
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sorting_method1(n,a);
    sorting_method2(n,a);
}