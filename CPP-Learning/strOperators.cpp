#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello";
    cout<<s1.at(1)<<endl;
    cout<<s1[1]<<endl;
    string s2="World";
    cout<<s1+s2<<endl;
    cout<<s1<<endl;
    s1=s1+s2;
    cout<<s1<<endl;
    s1[5]='D';
    cout<<s1<<endl;
    return 0;
}
