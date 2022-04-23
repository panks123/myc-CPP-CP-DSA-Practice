#include<iostream>
#include<stdio.h>
using namespace std;
int countMaxSignal(char *s,int n)
{
    cout<<s;
}
int main()
{
    int n;
    char s[100],newline;
    cout<<"Enter length of the signal:";
    cin>>n;
    cin>>newline;
    cout<<"Enter the signal:";
    scanf("%[^\n]s",s);
    cout<<s<<endl;
    countMaxSignal(s,n);
}
