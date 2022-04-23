#include<stdio.h>
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[min_pos])
            {
                min_pos=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_pos];
        arr[min_pos]=temp;
    }
}
void main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("Sorted array is:\n\n");
    for (int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
