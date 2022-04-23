//finding and counting duplicate elements in an unsorted array
#include<stdio.h>
void main()
{
    //int arr[]={6,6,7,9,10,14,15,15,15};
    int arr[]={8,2,6,1,8,2,7,8,4,3,9,10,15,15,17,20,12,13,15,17,8,7};
    int n=sizeof(arr)/sizeof(int);
    int count;
    for(int i=0;i<n-1;i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    count++;
                    arr[j]=-1;
                }
            }

        if(count>1)
            printf("% d is appearing %d times\n",arr[i],count);
        }
    }

}
