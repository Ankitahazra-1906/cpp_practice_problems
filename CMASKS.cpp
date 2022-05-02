#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x*100==y*10){
	        cout<<"cloth"<<endl;
	       
	    }
	    else if(x*100<y*10){
	        cout<<"disposable"<<endl;
	    }
	    else{
	        cout<<"cloth"<<endl;
	    }
	   
	}
	return 0;
}
