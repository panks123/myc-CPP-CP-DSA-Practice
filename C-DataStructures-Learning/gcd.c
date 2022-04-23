#include<stdio.h>
int GCD(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a==b)
        return a;
    else{
        if(a>b)
           return GCD(a-b,b);
        else
           return  GCD(a,b-a);
    }
}
void main()
{
    printf("Enter two no.\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd=GCD(a,b);
    printf("%d",gcd);

}
