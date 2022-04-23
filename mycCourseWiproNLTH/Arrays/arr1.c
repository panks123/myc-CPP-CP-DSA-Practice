//unique elements print krne ka program ---Worst case complexity---O(n^2)
#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Enter the size of array:");
    int n;
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag;
    printf("Unique elements: ");
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j&&arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",arr[i]);
    }
}
//Next program isse  efficient hai --- O(n)
