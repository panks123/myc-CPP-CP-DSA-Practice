#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
string reverseWords(char *s)
{
    vector<string> tmp;
    string str="";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            tmp.push_back(str);
            str="";
        }
        else
        {
            str=str+s[i];
        }

    }
    tmp.push_back(str);
    string s1="";
    for(int i=tmp.size()-1;i>0;i--)
    {
        s1=s1+tmp[i];
        s1=s1+" ";
    }
    s1=s1+tmp[0];
    return s1;
}
int main()
{
    cout<<"Enter a string: ";
    char s[100];
    scanf("%[^\n]",s);
    string s1=reverseWords(s);
    cout<<"After reversing the words: "<<s1;
}
