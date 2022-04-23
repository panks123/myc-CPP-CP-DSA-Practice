//recursive solution
#include<stdio.h>

void insertion_sort(int arr[],int start,int n)
{
    if(start>n-1)
        return;
    for(int i=start;i<n;i++)
    {
        int key=arr[start];
        int j=start-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    insertion_sort(arr,start+1,n);

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
    insertion_sort(arr,1,n);
    printf("Sorted array is:\n\n");
    for (int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
