#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            count+=1;
	        }
	    }
	    float ans =count+ (120-n);
	    float ansa=(ans/120);
	    if(ansa>=0.75){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
