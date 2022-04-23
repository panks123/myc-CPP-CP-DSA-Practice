#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],newline;
    char str2[100]="";
    printf("String daal tu:");
    scanf("%[^\n]s",str1);

    printf("Source string : %s\n",str1);
    printf("Destination string : %s\n",str2);
    strcpy(str2,str1);                          //strcpy(destination char *,source char*)-> in string.h header file
    printf("Copy krne ke baad\n");
    printf("Source string : %s\n",str1);
    printf("Destination string : %s\n",str2);
}
