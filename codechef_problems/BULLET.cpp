#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y/x<=z){
	        cout<<z-y/x<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
