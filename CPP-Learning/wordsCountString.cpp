#include<iostream>
using namespace std;
int countWordsInStr(char *s)
{
    int counts=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            counts++;
    }
    return counts;
}
int main()
{
    char s[100];
    cout<<"Enter the string:";
    gets(s);
    int counts=countWordsInStr(s);
    cout<<"No. of words in the string = "<<counts;
}
