#include<bits/stdc++.h>
using namespace std;
char firstNonRepeatedcharInString(char *s)
{
    unordered_map<char,int> m;
    for(int i=0;s[i]!='\0';i++)
    {
        m[s[i]]++;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(m.find(s[i])!=m.end())
            if(m[s[i]]==1)
                return s[i];
    }
    return '\0';
}
int main()
{
    char s[100];
    cout<<"Enter a string: ";
    gets(s);
    char c=firstNonRepeatedcharInString(s);
    if(c)
        cout<<"First non-repeated character in the given string is: "<<c;
    else
        cout<<"There is no non-repeated character present";
}
