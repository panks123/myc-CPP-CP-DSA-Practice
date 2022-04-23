//Finding missing elements in a sorted array
#include<stdio.h>
void main()
{
    //int arr[]={6,7,9,10,14,15};
    int arr[]={6,8,12,16,24,30};
    //int arr[]={6,8,10,12,16,18,20,22,24,26,28,30};
    //int arr[]={6,8,10,12,14,16,18,20,22,24,26,28,30};
    int flag=0;
    int n=sizeof(arr)/sizeof(int);
    int diff=arr[1]-arr[0];
    printf("Missing elements are: ");
    for(int i=1;i<n;i++)
    {
        int prev=arr[i-1];
        if((arr[i]-arr[i-1])!=diff)
        {
            flag=1;
            while(prev<arr[i])
            {
                if(prev+diff!=arr[i])
                {
                    printf("%d ",prev+diff);
                }
                prev=prev+diff;
            }
        }
    }
    if(flag==0)
        printf(" No missing element\n");
}
