#include<stdio.h>
void selection_sort(int arr[],int start,int n)
{
    if(start>=n-1)
    {
        return;
    }
    int min_pos=start;
    for(int i=start+1;i<n;i++)
    {
        if(arr[i]<arr[min_pos])
        {
            min_pos=i;
        }
    }
    if(min_pos!=start)
    {
        int temp=arr[start];
        arr[start]=arr[min_pos];
        arr[min_pos]=temp;
    }
    selection_sort(arr,start+1,n);
}
void main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selection_sort(arr,0,n);
    printf("sorted array:\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
