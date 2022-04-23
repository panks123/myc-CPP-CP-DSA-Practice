#include<stdio.h>
#include<string.h>
int substring(char *s1,char *s2)
{
    int m=strlen(s1);
    int n=strlen(s2);
    if(m<n)
        return -1;
    for(int i=0;i<=m-n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(s1[i+j]!=s2[j])
                break;
        }
        if(j==n)
            return i;
    }
    return -1;
}
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter a string:");
    fgets(s1,100,stdin);
    printf("Enter another string:");
    scanf("%[^\n]s",s2);
    printf("%d",substring(s1,s2));
}
