#include<stdio.h>
void main()
{
    char str[20];
    printf("String daal be:");
    scanf("%[^\n]s",str);
    int count =0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Le tera string ka length: %d",count);
    // Length of string nikaalne ka ek direct function hota hai bro: wo h strlen(string parameter jiska length nikalna hai)

}
