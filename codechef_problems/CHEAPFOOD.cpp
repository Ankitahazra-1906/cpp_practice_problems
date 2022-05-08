#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if(x*0.1>100){
	        cout<<x*0.1<<endl;
	    }
	    else{
	        cout<<100<<endl;
	    }
	}
	return 0;
}
