#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Hello";

    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    string::iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        cout<<*it;
    }
    string::reverse_iterator it1;
    cout<<endl;
    for(it1=s.rbegin();it1<s.rend();it1++)
    {
        cout<<*it1;
    }
}
