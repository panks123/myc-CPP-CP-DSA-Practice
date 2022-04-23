#include<stdio.h>
void main()
{
    int n;
    printf("Enter value of n to get nth term in the Fibonacci series:\n");
    scanf("%d",&n);
    int prev1=0,prev2=1,s;
    if(n==0)
    {
        s=0;
    }
    else if(n==1)
    {
        s=1;
    }
    for(int i=2;i<=n;i++)
    {
            s=prev1+prev2;
            prev1=prev2;
            prev2=s;


    }
    printf("%d  ",s);
}
