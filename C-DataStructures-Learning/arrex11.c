//Finding missing element in an array of sorted natural numbers(may or may not start with 1) provided array is sorted and there is single missing element
#include<stdio.h>
void main()
{
    int arr[]={3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    int diff=arr[0]-0;
    for(int i=1;i<n;i++)
    {
        if((arr[i]-i)!=diff)
        {
            printf("Missing element is :%d",i+diff);
            return;
        }
    }
}
