#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc, char* argv[])
{
    if(argc>2)
    {
        char * s1=argv[1];
        char * s2=argv[2];
        int flag;
        //printf("%s",s1);
        char *str=(char*)malloc(strlen(s1)*sizeof(char));
        int k=0;
        for(int i=0;strlen(s1);i++)
        {
            flag=0;
            for(int j=0;j<strlen(s2);j++)
            {
                if(s1[i]==s2[j])
                    flag=1;
            }
            if(flag==0)
            {
                str[k]=s1[i];
                k++;
            }
        }
        str[k]='\0';
        for(int i=0;i<strlen(str);i++)
        {
            for(int j=0;strlen(str)-i-1;j++)
            {
                if(str[j]>str[j+1])
                {
                    char temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        }
        printf("%s", str);

    }
}
