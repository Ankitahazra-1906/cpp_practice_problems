#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,w,l;
	cin>>t;
	while(t--){
	    cin>>n;
	    w=(n-1)*3;
	    l=((n-1)/2)*3;
	    cout<<w-l<<endl;
	}
	return 0;
}
