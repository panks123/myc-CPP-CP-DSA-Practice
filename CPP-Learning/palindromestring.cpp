#include<iostream>
#include<stdio.h>
using namespace std;
bool isPalindrome(string s)
{
    for(int i=0,j=s.length()-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}
int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    cout<<isPalindrome(s);
}

