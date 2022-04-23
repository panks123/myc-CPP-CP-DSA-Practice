//finding pairs (a,b) in a given array such that a+b=k provided the array does not contain any duplicate
#include<stdio.h>
void main()
{
    int arr[]={6,3,8,10,16,7,5,2,9,4,3,14};
    int n=sizeof(arr)/sizeof(int);
    int k=10;
    printf("pairs of elements whose sum is %d are: ",k);
    for(int i=0;i<n-1;i++)
    {
       if(arr[i]<=10)
       {
           for(int j=i+1;j<n;j++)
           {
              if(arr[i]+arr[j]==k)
                 printf("(%d,%d) ",arr[i],arr[j]);
           }
       }
    }
}
