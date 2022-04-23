#include<stdio.h>
int checkIfSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
            return 0;
    }
    return 1;
}
void main()
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int result=checkIfSorted(arr,n);
    if(result==0)
        printf("Array is Unsorted\n");
    if(result==1)
        printf("Array is Sorted\n");
}
