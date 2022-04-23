//Given an array , find all pairs of the array elements whose sum is divisible by k
#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k: ");
    int k;
    scanf("%d",&k);
    int freq_hashT[k];
    for(int i=0;i<k;i++)
    {
        freq_hashT[i]=0;
    }
    int counts=0;
    for(int i=0;i<n ;i++)
    {
        int rem=arr[i]%k;
        if(rem!=0)
        {
            counts+=freq_hashT[k-rem];
        }
        else
        {
            counts+=freq_hashT[0];
        }
        freq_hashT[rem]++;

    }
    printf("Total number of pairs which are divisible by %d= %d",k,counts);
}






