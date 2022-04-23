#include<stdio.h>
#include<stdlib.h>
int* fun(int n)
{
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        p[i]=i+2;
    }
    return p;
}
void main()
{
    int *p;
    int n=5;
    p=fun(n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",p[i]);
    }
}
