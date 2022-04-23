#include<iostream>
using namespace std;
void countVowelConsonant(char *s)
{
    int counts1=0,counts2=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            counts1++;
        else if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
            counts2++;

    }
    cout<<"No. of vowels = "<<counts1<<endl<<"No. of consonants = "<<counts2;
}
int main()
{
    char s[100];
    cout<<"Enter a string: ";
    gets(s);
    countVowelConsonant(s);
}
