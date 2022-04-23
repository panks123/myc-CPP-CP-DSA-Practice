#include<bits/stdc++.h>
using namespace std;
int DuplicatesInStr(char *s)
{
    unordered_map<char,int> m;
    for(int i=0;s[i]!='\0';i++)
    {
        m[s[i]]++;
    }
    unordered_map<char,int>:: iterator it;
    int counts=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>1)
        {
            counts++;
            cout<<it->first<< " has occurred "<<it->second <<" times\n";
        }
    }
    return counts;
}
int main()
{
    char s[100];
    cout<<"Enter the string:";
    gets(s);
    int counts=DuplicatesInStr(s);
    cout<<"No. of duplicate characters in the string = "<<counts;
}
