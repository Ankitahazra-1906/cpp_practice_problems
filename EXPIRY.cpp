#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,k;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>m>>k;
	    if(n<=m*k){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	    
	}
	return 0;
}
