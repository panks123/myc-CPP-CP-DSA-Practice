#include<stdio.h>
void main()
{
    int arr[6]={2,8,3,7,6,9};
    int i=0,j=5;
    while(i<j)
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    for(int i=0;i<6;i++)
        printf("%d ",arr[i]);
}
