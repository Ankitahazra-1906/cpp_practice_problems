#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,n;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    n=(z-y)/x;
	    if((n*x)+y<=z){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
