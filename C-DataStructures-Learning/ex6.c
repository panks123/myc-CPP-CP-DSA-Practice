#include<stdio.h>
void main()
{
    int arr[]={10 ,20 ,20 ,10 ,10 ,30 ,50 ,10 ,20};
    int n=sizeof(arr)/sizeof(int);
    int count=1;
    int totalpairs=0;
    for(int i=0;i<n;i++)
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
            totalpairs=totalpairs+(count/2);
        }
        else
        {
            count=1;
        }

    }
    printf("%d",totalpairs);
}













}
