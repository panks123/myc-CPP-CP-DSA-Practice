#include<stdio.h>
double e(int x,int n)
{
    static double power=1,fact=1;
    double result;
    if(n==0)
    {
        return 1;
    }
    else
    {
        result=e(x,n-1);
        power=power*x;
        fact=fact*n;
        return (float)(result+(power/fact));
    }
}
void main()
{
    int x;
    printf("Enter  value of x to find e power x\n");
    scanf("%d",&x);
    double result=e(x,10);//Here 5 is no. of terms in the Taylors series expansion
    printf("e power %d = %lf",x,result);
}
