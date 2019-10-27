#include <iostream>
using namespace std;

bool isVowel(char a);
void pigLatinString(string& str);
void rotate(string& str);

int main() 
{ 
    string str;
    cout<<"Plese enter a String : ";
    cin>>str;
	pigLatinString(str);
	cout<<str<<endl;
	return 0; 
}

bool isVowel(char a){

    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'y':
        return true;
    
    default:
        return false;
    }
}


void rotate(string& str){

    char temp = str[0];                 
    int len = str.length();
    str = str.substr(1,len-1) + temp;
}


void pigLatinString(string& str){

    if (isVowel(str[0]))
    {
        str = str + "-way";
        return;
    }else
    {
        str = str + "-";
    }
    
    int strLen = str.length();

    for (size_t i = 1; i < strLen; i++)
    {
        if (!isVowel(str[0]))
        {
            rotate(str);
        }
        else
        {
            str = str + "ay";
            return;
        }
    }
	rotate(str);
	str = str + "way";
}