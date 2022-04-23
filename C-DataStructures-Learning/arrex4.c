#include<stdio.h>
void main()
{
    int *arr[3];
    int a1[]={1,2,3},a2[]={2,4,6,8},a3[]={1,3,5,7,9};
    arr[0]=a1;
    arr[1]=a2;
    arr[2]=a3;
    printf("%d",(sizeof(*arr[0]))/sizeof(int));
    /*for(int i=0;i<3;i++)
    {
        for(int j=0;j<(sizeof(arr[i]))/sizeof(int);j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } Sorry cannot do*/
}
