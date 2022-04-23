#include<iostream>
using namespace std;
int countWordsInStr(string s)
{
    int counts;
    if(s[0]==' ')
        counts=0;
    else
        counts=1;
    for(int i=0;i<s[i]!='\0';i++)
    {
        if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0')
            counts++;
    }
    return counts;
}
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int n=countWordsInStr(s);
    cout<<"No. of words: "<<n;
}
