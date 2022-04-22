#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    cout<<min(x*3,y*2)<<endl;
	}

	return 0;
}
