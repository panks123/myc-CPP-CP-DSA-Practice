//counting no. of vowels and consonants in a string
#include<stdio.h>
void main()
{
    char s[20];
    printf("Enter a string:\n");
    scanf("%[^\n]%*c",s);
    int vcount=0,ccount=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vcount++;
        else if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
            ccount++;
    }
    printf("No. of vowels in the string: %d\nNo.of consonants in the string: %d\n",vcount,ccount);
}
