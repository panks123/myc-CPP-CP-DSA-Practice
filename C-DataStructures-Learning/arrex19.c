//finding pairs (a,b) in a given array such that a+b=k provided the array does not contain any duplicate using hash table
#include<stdio.h>
int maximum(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
void main()
{
    int arr[]={6,3,8,10,16,7,5,2,9,4,3,14};
    int n=sizeof(arr)/sizeof(int);
    int k=10;
    int max=maximum(arr,n);
    int H[max+1];
    for(int i=0;i<max+1;i++)
    {
        H[i]=0;
    }
    printf("pairs of elements whose sum is %d are: ",k);
    for(int i=0;i<n;i++)
    {
        if(H[k-arr[i]]>0&&arr[i]<10)
            printf("(%d,%d) ",arr[i],k-arr[i]);
        H[arr[i]]++;
    }
}
