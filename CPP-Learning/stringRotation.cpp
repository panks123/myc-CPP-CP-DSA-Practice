#include<iostream>
#include<string>
using namespace std;
bool isRotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    s1=s1+s1;
    return s1.find(s2)!=string::npos;
}
int main()
{
    cout<<"Enter two strings: ";
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<isRotation(s1,s2);
}

