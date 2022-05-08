#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,m;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y>>m;
	    if(x*m<y){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
