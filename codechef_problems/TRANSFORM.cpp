#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    
	    cin>>x;
	    if(x%3==0){
	        cout<<"normal"<<endl;
	    }
	    else if(x%3==1){
	        cout<<"huge"<<endl;
	    }
	    else{
	        cout<<"small"<<endl;
	    }
	}
	return 0;
}
