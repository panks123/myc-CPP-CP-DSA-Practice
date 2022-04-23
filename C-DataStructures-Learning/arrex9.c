//Finding missing element in an array of sorted natural numbers(starting with 1) provided array is sorted and there is single missing element
#include<stdio.h>
int sum(int arr[],int n)
{
    if(n<0)
        return 0;
    else
        return arr[n]+sum(arr,n-1);
}
void main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int l=arr[n-1];
    int Sum=sum(arr,n-1);
    int DesiredSum=(l*(l+1))/2;
    printf("Missing element is : %d\n",DesiredSum-Sum);
}
