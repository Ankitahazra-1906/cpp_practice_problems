#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(a*10==b*5){
	        cout<<"any"<<endl;
	        
	    }
	    else if(a*10>b*5){
	        cout<<"first"<<endl;
	    }
	    else{
	        cout<<"second"<<endl;
	    }
	}
	return 0;
}
