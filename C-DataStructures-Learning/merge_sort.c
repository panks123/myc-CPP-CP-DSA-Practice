#include<stdio.h>
#include<limits.h>
void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[q+j+1];
    }
    int i=0,j=0,k=p;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int p,int r)
{
    if(p<r)
    {
        int m=(p+r)/2;
        merge_sort(arr,p,m);
        merge_sort(arr,m+1,r);
        merge(arr,p,m,r);
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
    merge_sort(arr,0,n-1);
    printf("Sorted array is:\n\n");
    for (int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
