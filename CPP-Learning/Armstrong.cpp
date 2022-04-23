#include<iostream>
#include<math.h>
using namespace std;
int digits(int n)
{
    int d=0;
    while(n!=0)
    {
        d++;
        n=n/10;
    }
    return d;
}
int isArmstrong(int n)
{
    int d=digits(n);
    int sum=0;
    int a=n;
    while(n!=0)
    {
        sum=sum+pow(n%10,d);
        n=n/10;
    }
    if(sum==a)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a no.:");
    scanf("%d",&n);
    if(isArmstrong(n))
        printf("%d is a armstrong no./plus perfect no.",n);
    else
        printf("%d is not a armstrong no./plus perfect no.",n);
}
