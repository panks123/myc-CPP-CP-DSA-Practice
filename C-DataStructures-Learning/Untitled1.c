#include<stdio.h>
int findTotalFeet(int n,int arr[])
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]/12>0)
        {
           res=res+(int)(arr[i]/12);

        }

    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=findTotalFeet(n,arr);
    printf("%d",res);
    return 0;
}
