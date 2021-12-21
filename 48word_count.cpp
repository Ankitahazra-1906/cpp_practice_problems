//Program to count all the words in a string
#include<iostream>
using namespace std;
int main(){
    string str;
    int ctr=0,count;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            ctr++;
        }
        count=ctr+1;
        

    }
    cout<<"Word Count: "<<count;
}