/*To check a character is a vowel or consonant*/
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;
    if(!isalpha(c))
    {
        cout<<"Invalid";
    }
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c=='A' || c=='E'|| c=='I' || c=='O'|| c=='U')
    {
        cout<<"Its a vowel";
    }
    else
    {
        cout<<"Its a consonant";
    }
  
}
