#include <iostream>
using namespace std;

int main() {
	// your code goes here
	#include<iostream>
	using namespace std;
	int t;
	cin>>t;
	while(t--){
	    int n,x,y,ans;
	    cin>>n>>x>>y;
	    ans=2*n-2;
	    ans+=min(x-1,y-1);
	    ans+=min(x-1,n-y);
	    ans+=min(n-x,y-1);
	    ans+=min(n-x,n-y);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
