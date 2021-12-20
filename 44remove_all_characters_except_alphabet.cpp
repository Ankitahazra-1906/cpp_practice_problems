//Program to remove all the characters of a string except alphabts
#include<iostream>
using namespace std;
int main(){
    string line;
    string temp="";
    cout<<"Enter any string: ";
    getline(cin,line);
    for(int i=0;i<line.size();++i){
        if ((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&&line[i]<'Z'))
        {
            temp=temp+line[i];
        }
    }
    line=temp;
    cout<<"String with only alphabets: "<<line;
}