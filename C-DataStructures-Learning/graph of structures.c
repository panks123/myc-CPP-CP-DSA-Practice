#include<stdio.h>
 typedef struct node
{
    int l;
    int d;
}node;
int a;
void main()
{
    int x;
    int y;
    printf("Enter dimension of 2D array:\n");
    scanf("%d %d",&x,&y);
    node n[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("Enter values of l and d: ");
            scanf("%d %d",&n[i][j].l,&n[i][j].d);
        }
    }
    printf("The 2D array is:\n\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("(%d %d)  ",n[i][j].l,n[i][j].d);

        }
        printf("\n");
    }

}
