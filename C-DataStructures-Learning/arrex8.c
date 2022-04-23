//moving all the -ve elements to the left side and all the +ve elements to the right side(alternative)
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
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("Shifting -ve elements on L.H.S. and +ve elements on R.H.S.\n");
    for(int i=0;i<n ;i++)
    {
        printf("%d  ",arr[i]);
    }
}
