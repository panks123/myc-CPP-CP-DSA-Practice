// String reverse krne ka program
#include<stdio.h>
#include<string.h>
/*
char * reverse(char *str)
{
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return str;
}*/
void main()
{
    char str[100];
    printf("String daal:");
    scanf("%[^\n]s",str);
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed string :%s\n",str);
    //Reverse krne ke liye bana banaya function hai strrev() jo string.h header file file me hota h
    strrev(str);
    printf("Waapas se Reversed string :%s",str);

}
