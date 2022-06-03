#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	       
	    }
	    sort(arr,arr+n);
	    for(int j=0;j<n;j++){
	        if(arr[j]!=arr[j+1]){
	           c++;
	        }
	    }
	    
	    cout<<c<<endl;
	}
	return 0;
}
