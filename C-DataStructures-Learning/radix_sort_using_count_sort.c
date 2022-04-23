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
void countSort(int arr[],int n,int exp)
{
    int output[n];
    int count[10];
    for(int i=0;i<10;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];
    printf("\n");

}
void radixSort(int arr[],int n)
{
    int max=findMax(arr,n);
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        countSort(arr,n,exp);
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
    radixSort(arr,n);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
