#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int edgeTo;
    struct node *next;
}node;
void main()
{
    int n;
    int origin,destination;
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    node *graph[n+1];
    printf("Note: Enter the edge between two valid nodes e.g. 1 2 AND if you want to stop giving further edges enter 0 0\n");
    for(int i=1;i<n*n;i++)
    {
            scanf("%d %d",&origin,&destination);
            if(origin==0&& destination==0)
            {
                break;
            }
            else if(origin<=0||destination<=0||origin>n||destination>n)
            {
                printf("Invalid input\n");
            }
            else
            {
                node *p=NULL;
                node *temp=(node*)malloc(sizeof(node));
                temp->next=NULL;
                temp->edgeTo=destination;
                p=graph[i];
                p->next=NULL;
                while(p->next!=NULL)
                    p=p->next;
                p->next=temp;
                printf("\n%d",p->next->edgeTo);
                break;
            }
    }
}
