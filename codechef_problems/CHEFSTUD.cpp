#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='<' && s[i+1]=='>'){
	            ans+=1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
