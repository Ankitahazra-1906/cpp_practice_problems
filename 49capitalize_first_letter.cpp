//Program to capitalize first letter of every word in a string
#include<iostream>
#include<string>
using namespace std;
string capitalize_first_letter(string str){
    for(int i=0;i<str.length();++i){
        if(i==0){
            str[i]=toupper(str[i]);
        }
        else if(str[i-1]==' '){
            str[i]=toupper(str[i]);
        }
    }
    return str;
}
int main(){
    string str;
    cout<<"Enter any string: ";
    getline(cin,str);
    cout<<capitalize_first_letter(str);
    return 0;
}