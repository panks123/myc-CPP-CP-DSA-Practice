#include<stdio.h>
void strcpy(char *s,char *t)
{
    while(*s++=*t++);

}
void main()
{
    char a[10]="Pankaj";
    a[3]='K';
    int i=0;
    printf("%s",a);
    printf("\n");
    char *c="Amyra";
    printf("%s\n",c);
    strcpy(a,c);
    printf("%s\n",a);
    a[10]="Pankaj";
    i=0;


}
