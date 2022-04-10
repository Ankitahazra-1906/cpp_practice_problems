#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    long long n;
	cin>>t;
	
	for(int i=0;i<t;i++){
	  
	    cin>>n;
	    if(n%4==3 || n%4==2){
	        cout<<3<<endl;
	    }
	    else if(n%4==0){
	        cout<<3+n<<endl;
	    }
	    else if(n%4==1){
	        cout<<n<<endl;
	    }
	    
	 
	    
	}
	return 0;
}
