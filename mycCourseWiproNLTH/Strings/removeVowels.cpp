#include<bits/stdc++.h>
using namespace std;
int isVowel(char c)
{
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        return 1;
    return 0;
}
void removeVowel(char str[])
{
    char temp[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isVowel(str[i])==0)
            temp[j++]=str[i];
    }
    temp[j]='\0';
    strcpy(str,temp);
    cout<<str<<endl;
}
int main()
{
    cout<<"Enter a string :";
    char str[100];
    scanf("%[^\n]s",str);
    removeVowel(str);
    cout<<"After removing vowels: "<<str;
}
