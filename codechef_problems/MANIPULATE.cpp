#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    cin>>X>>Y;
	    
        if(X>=Y){
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	    
	
	return 0;
}
