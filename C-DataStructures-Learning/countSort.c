#include<stdio.h>
int findMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
        return max;
}
void countSort(int arr[],int n)
{
    int max=findMax(arr,n);
    int count[max+1];
    for(int i=0;i<max+1;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int i=0,j=0;
    while(i<max+1)
    {
        if(count[i]>0)
        {
            arr[j++]=i;
            count[i]--;
        }
        else
            i++;
    }
}
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array to sort:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countSort(arr,n);
    printf("Sorted array :");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

}
