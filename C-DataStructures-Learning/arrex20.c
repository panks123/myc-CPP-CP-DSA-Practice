//finding pairs (a,b) in a given sorted array such that a+b=k
#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6,8,9,10,12,14};//given a sorted array
    int n=sizeof(arr)/sizeof(int);
    int k=10;
    int i=0,j=n-1;//we set the variable 'i' as the index of first element and we set 'j' as the index of last element
    printf("pairs of elements whose sum is %d are: ",k);
    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            printf("(%d,%d) ",arr[i],arr[j]);//if the pair (arr[i],arr[j]) is found such that arr[i]+arr[j]==k then we print that pair , increment i and decrement j
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<k)
        {
                 //if the pair (arr[i],arr[j]) is found such that arr[i]+arr[j]<k then we only increment i
            i++;
        }
        else
        {
                //if the pair (arr[i],arr[j]) is found such that arr[i]+arr[j]>k then we only decrement j
            j--;
        }
    }
}
