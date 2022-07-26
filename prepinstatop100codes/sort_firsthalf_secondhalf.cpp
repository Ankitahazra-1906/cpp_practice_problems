//Sorting of the first half of an array in ascending order and the second half in descending order
#include<bits/stdc++.h>
using namespace std;
void asc_desc_sort(int n,int a[]){
    sort(a,a+n);
    for(int i=0;i<n/2;i++){
        cout<<a[i]<<" ";
    }
    for(int j=n-1;j>=n/2;j--){
        cout<<a[j]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    asc_desc_sort(n,a);
}