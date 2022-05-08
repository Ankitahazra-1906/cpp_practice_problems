#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;

	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    
	    if(y%x!=0){
	        cout<<y/x<<endl;
	    }
	    else{
	        cout<<y/x-1<<endl;
	    }
	}
	return 0;
}
