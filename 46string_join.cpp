//Program to concatenate two strings
#include<iostream>
using namespace std;
int main(){
    string str1,str2,line;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    cout<<"Enter the second string: ";
    getline(cin,str2);
    line=str1+" "+str2;
    cout<<"After concatenation: "<<line;
}