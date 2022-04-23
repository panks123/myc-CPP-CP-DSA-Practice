#include <bits/stdc++.h>
using namespace std;
char * reverseStr(char *str,int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
        start++;
        end--;
    }
    return str;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);

    char *revStr=reverseStr(str,strlen(str));
    cout<<revStr;
}

