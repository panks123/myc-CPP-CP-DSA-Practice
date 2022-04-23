#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char s[]="03-04-2000";
    char *token;
    token=strtok(s,"-");
    token=strtok(NULL,"-");
    printf("%d",atoi(token));
}
