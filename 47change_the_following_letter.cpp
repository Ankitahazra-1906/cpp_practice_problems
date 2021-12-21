//Program to change every letter in the given string with the following letter in the alphabet
#include<iostream>
using namespace std;
int main(){
    string str;
    int char_code;
    cout<<"Enter the original string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char_code=int(str[i]);
        if(char_code==122){
            str[i]=char(97);
        }
        else if(char_code==90){
            str[i]=char(65);
        }
        else if(char_code>=65&&char_code<=90||char_code>=97&&char_code<=122){
            str[i]=char(char_code+1);
        }
    }
    cout<<"New string: "<<str;

}
