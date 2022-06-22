//3.Write a code that will create custom ciphers (encoded words) on strings



#include <iostream>
#include<ctype.h>
using namespace std;

string encode(string s, int j)
{
    char c;
    string result = "";

    for (int i=0; i<s.length(); i++)
    {

         if (isspace(s[i]))
           result += char(int(s[i]-32)%26 +32);


        else
            result += char(int(s[i]+j-97)%26 +97);
    }

    return result;
}

int main()
{
    string s;

    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        cout<<s[i];
    }

        //string s="I am a student";
        int j = 2;
        cout << "\nStep: " << j;
        cout << "\n encode: " << encode(s,j);
        return 0;
    }
