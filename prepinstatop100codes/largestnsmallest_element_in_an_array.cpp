//To find the largest and smallest element in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max_element=INT_MIN;
    int min_element=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=max_element){
            max_element=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=min_element){
            min_element=arr[i];
        }
    }
    
    cout<<max_element<<endl;
    cout<<min_element<<endl;
}