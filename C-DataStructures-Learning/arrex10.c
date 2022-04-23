//Finding missing element in an array of sorted natural numbers(may not start with 1) provided array is sorted and there is single missing element
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
    int arr[]={3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    int f=arr[0];
    int beforef=f-1;
    int tempSum=(beforef*(beforef+1))/2;
    int l=arr[n-1];
    int DesiredSum=(l*(l+1))/2;
    int Sum=sum(arr,n-1);
    printf("Missing element is : %d\n",DesiredSum-(Sum+tempSum));
}
