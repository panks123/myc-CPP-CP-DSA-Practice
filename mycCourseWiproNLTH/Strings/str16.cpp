//Program : kisi bhi string ke words ko alag alag krne ka
// Smallest aur largest string find krne ka program
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
        m[v[i]]=v[i].length();
    }
    map<string,int> :: iterator it=m.begin();
    int largest=it->second,smallest=it->second;
    string largestStr=it->first,smallestStr=it->first;
    for(;it!=m.end();it++)
    {
        if(it->second>largest)
        {
            largest=it->second;
            largestStr=it->first;
        }
        if(it->second<smallest)
        {
            smallest=it->second;
            smallestStr=it->first;
        }
    }
    cout<<"Smallest string: "<<smallestStr<<endl;
    cout<<"Largest string: "<<largestStr<<endl;
}
