//finding and counting duplicate elements in an unsorted array when maximum element in the array is not very much larger value
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
    //int arr[]={6,6,7,9,10,14,15,15,15};
    int arr[]={8,2,6,1,8,2,7,8,4,3,9,10,15,15,17,20,12,13,15,17,8,7};
    int n=sizeof(arr)/sizeof(int);
    int max=maximum(arr,n);
    int H[max+1];
    for(int i=0;i<max+1;i++)
        H[i]=0;
    for(int i=0;i<n;i++)
    {
        H[arr[i]]++;
    }
    for(int i=0;i<max+1;i++)
    {
        if(H[i]>1)
            printf("%d is appearing %d times\n",i,H[i]);
    }
}
