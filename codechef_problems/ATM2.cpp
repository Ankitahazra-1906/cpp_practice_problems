#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]<=k){
	            cout<<1;
	            k=k-s[i];
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
