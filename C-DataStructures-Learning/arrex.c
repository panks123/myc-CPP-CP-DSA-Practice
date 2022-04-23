#include<stdio.h>
void fun(int *arr,int n)//or void fun(int arr[],int n)
{
    arr[0]=100;
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
void main()
{
    int arr[]={10,20,30,40,50};
    fun(arr,5);
    printf("\n");
    for(int i=0;i<5;i++)//array is always passed by address
    {
        printf("%d  ",arr[i]);
    }
}
