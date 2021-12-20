//Program to find the length of a string
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string: ";
    getline(cin,str);
    cout<<"String Length: "<<str.size()<<endl;
}