#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
        scanf("%d  ",&arr[i]);
    }
    printf("Sorting the array elements:\n");
    bubble_sort(arr,n);
    printf("Elements of array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
