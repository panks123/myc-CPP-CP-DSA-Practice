#include<iostream>
using namespace std;
bool isAnagram(char *s1,char *s2)
{
    int sum1=0,sum2=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        sum1=sum1+s1[i];
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        sum2=sum2+s2[i];
    }
    if(sum1==sum2)
        return true;
    return false;
}
int main()
{
    char s1[100],s2[100];
    cout<<"Enter two strings :";
    gets(s1);
    gets(s2);
    if(isAnagram(s1,s2))
        cout<<"These are anagram strings\n";
    else
        cout<<"These are not anagram strings\n";
}
