#include<stdio.h>
double e(int x,int n)
{
    double s=1;
    if(n==0)
        return s;
    else{
        for(;n>0;n--)
        {
            s=1+(x*s)/n;
        }
        return s;
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
