#include<stdio.h>
void shellSort(int arr[],int n)
{

    for(int gap=n/2;gap>=1;gap/=2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp=arr[i];
            int j=i-gap;
            while(j>=0&&arr[j]>temp)
            {
                arr[j+gap]=arr[j];
                j=j-gap;
            }
            arr[j+gap]=temp;
        }
    }
}
void main()
{
    int n;
    printf("Enter no. of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array to be sorted:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    shellSort(arr,n);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
