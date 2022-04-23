//finding duplicate elements in a sorted array
#include<stdio.h>
void main()
{
    int arr[]={6,6,7,9,10,14,15,15,15};
    //int arr[]={6,8,12,12,16,24,24,24,30,30,30,30,30,32};
    int n=sizeof(arr)/sizeof(int);
    int lastduplicate;
    printf("Duplicates in the array are: ");
    for(int i=0;i<n ;i++)
    {

        if(arr[i]==arr[i+1]&&arr[i]!=lastduplicate)
            printf("%d ",arr[i]);
        lastduplicate=arr[i];
    }

}
