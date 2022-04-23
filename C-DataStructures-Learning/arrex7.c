//moving all the -ve elements to the left side and all the +ve elements to the right side
#include<stdio.h>
void main()
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]>=0&&arr[j]>=0)
        {
            j--;
        }
        else if(arr[i]>=0&&arr[j]<0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else if(arr[i]<0&&arr[j]>=0)
        {
            i++;
            j--;
        }
        else if(arr[i]<0&&arr[j]<0)
        {
            i++;
        }
    }
    printf("Shifting -ve elements on L.H.S. and +ve elements on R.H.S.\n");
    for(int i=0;i<n ;i++)
    {
        printf("%d  ",arr[i]);
    }
}
