//Finding missing elements in a sorted array using Hash Table
#include<stdio.h>
void main()
{
    //int arr[]={6,7,9,10,14,15};
    int arr[]={6,8,12,16,24,30};
    //int arr[]={6,8,10,12,16,18,20,22,24,26,28,30};
    //int arr[]={6,8,10,12,14,16,18,20,22,24,26,28,30};
    int n=sizeof(arr)/sizeof(int);
    int diff=arr[1]-arr[0];
    int first=arr[0];
    int last=arr[n-1];
    int flag=0;
    int H[last+1];
    for(int i=0;i<last+1;i++)
    {
        H[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        H[arr[i]]++;
    }
    printf("Missing elements are:");
    for(int i=first;i<=last+1;i=i+diff)
    {
        if(H[i]==0)
        {
            flag=1;
            printf("%d ",i);
        }
    }
    if(flag==0)
        printf("No missing element\n");

}
