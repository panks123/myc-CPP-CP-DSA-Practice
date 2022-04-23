//finding and counting duplicate elements in a sorted array
#include<stdio.h>
void main()
{
    //int arr[]={6,6,7,9,10,14,15,15,15};
    int arr[]={6,8,12,12,16,24,24,24,30,30,30,30,30,32};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1 ;i++)
    {
        if(arr[i]==arr[i+1])
        {
            int j=i+1;
            while(arr[j]==arr[i])
            {
                j++;
            }
            printf("%d is appearing %d times\n",arr[i],j-i);
            i=j-1;
        }
    }

}
