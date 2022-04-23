#include<bits/stdc++.h>
using namespace std;
int countSubstring(char str[],char subStr[])
{
    if(strlen(str)<strlen(subStr))
        return 0;
    int flag,counts=0;
    for(int i=0;i<=strlen(str)-strlen(subStr);i++)
    {
        flag=1;
        for(int j=0;j<strlen(subStr);j++)
        {
            if(str[i+j]!=subStr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            counts++;
    }
    return counts;
}
int main()
{
    char str[100],subStr[100],newline;
    cout<<"Enter the string:";
    scanf("%[^\n]s",str);
    scanf("%c",&newline);
    cout<<"Enter the substring to check:";
    scanf("%[^\n]s",subStr);
    cout<<"Number of times the substring has repeated in the string= "<<countSubstring(str,subStr);
}
