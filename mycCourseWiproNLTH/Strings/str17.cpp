//Given string me kisi word ka occurrence count krne ka program
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    vector<string> v;
    string str="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            v.push_back(str);
            str="";
        }
        else
            str=str+s[i];
    }
    v.push_back(str);
    map<string,int> m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    string word;
    cout<<"Enter the word: ";
    getline(cin,word);
    if(m.find(word)!=m.end())
    {
        cout<<word<<" has occurred "<<m[word]<<" times";
    }
    else
    {
        cout<<word<<" has occurred "<<0<<" times";
    }
}
