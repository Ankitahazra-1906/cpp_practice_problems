#include<iostream>
using namespace std;
int main(){
    
    int num[6];
    cout<<"Enter the number of data: ";
    
    for(int i=0;i<6;++i){
        cin>>num[i];
    }
    cout<<"you entered: "<<endl;
    for(int i=0;i<6;++i){
        cout<<endl<< *(num+i);

    }

    
}

