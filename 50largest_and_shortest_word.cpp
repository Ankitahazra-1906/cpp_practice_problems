//Program to find the largest and shortest word
#include<iostream>
using namespace std;
int main(){
    string words,shortest, longest;
    cout<<"Enter some words: ";
    cin>>words;
    longest=shortest=words;
    while(cin>>words){
        if(words.size()>longest.size()){
            longest=words;
        }
        else if(words.size()<longest.size()){
            shortest=words;
        }
    }
    cout<<"The longest word is "<<longest<<" with the size of "<<longest.size()<<endl;
    cout<<"The shortest word is "<<shortest<<" with the size of "<<shortest.size()<<endl;

}