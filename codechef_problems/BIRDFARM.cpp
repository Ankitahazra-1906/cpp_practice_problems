#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t; //taking no of test cases as input
	while(t--){
	    cin>>x>>y>>z;
	    if(z%x==0 && z%y==0)
            cout<<"any"<<endl;
	    else if(z%x==0 && z%y!=0)
	        cout<<"chicken"<<endl;
	    else if(z%y==0 && z%x!=0)
	        cout<<"duck"<<endl;
        
        else
            cout<<"none"<<endl;
	    
	}
	return 0;
}
