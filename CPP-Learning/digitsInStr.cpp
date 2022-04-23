#include<iostream>
using namespace std;
bool checkDigitsInStr(char *s)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<'0'||s[i]>'9')
            return false;
    }
    return true;
}
int main()
{
    char s[100];
    cout<<"Enter a string: ";
    gets(s);
    if(checkDigitsInStr(s))
        cout<<"Only digits are present";
    else
        cout<<"Only digits are not present";
}
