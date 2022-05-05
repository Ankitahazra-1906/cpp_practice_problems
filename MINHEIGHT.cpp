#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,h;
	cin>>t;
	while(t--){
	    cin>>x>>h;
	    if(x>=h)
	        cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
	return 0;
}
