// Program to print pythogorian triplets within 1-n
#include<stdio.h>
void printPythogorianTriplets(int limit)
{
    int m=2;
    int a,b,c=0;
    while(c<limit)
    {
        for(int n=1;n<m;n++)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limit)
                break;
            printf("%d %d %d\n",a,b,c);
        }
        m++;
    }
}
int main()
{
    int l;
    printf("Enter the limit: ");
    scanf("%d",&l);
    printf("Pythogorian triplets between 1-%d: ",l);
    printPythogorianTriplets(l);
}
