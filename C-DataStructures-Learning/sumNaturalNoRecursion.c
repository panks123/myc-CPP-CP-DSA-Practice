#include<stdio.h>>
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
    return 0;
}
void main()
{
    int n;
    printf("Sum of N natural no.s using recursion\nEnter N value\n");
    scanf("%d",&n);
    printf("Sum= %d",sum(n));
}
