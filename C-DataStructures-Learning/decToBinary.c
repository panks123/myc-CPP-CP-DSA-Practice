#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[32];
    int i=0;
    while(n!=0)
    {
        int r=n%2;
        printf("%d",r);
        arr[i]=r;
        i++;
        n=n/2;
    }
    printf("\n");
    i=i-1;
    while(i>=0)
        printf("%d",arr[i--]);
    printf("\n");

}
