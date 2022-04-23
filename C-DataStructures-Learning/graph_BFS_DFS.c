#include<stdio.h>
#include<stdlib.h>
int n=7;
int G[7][7]={{0,0,0,0,0,0,0},
             {0,0,1,1,0,0,0},
             {0,1,0,0,1,0,0},
             {0,1,0,0,1,0,0},
             {0,0,1,1,0,1,1},
             {0,0,0,0,1,0,0},
             {0,0,0,0,1,0,0}};

typedef struct node
{
    int data;
    struct node *next;
}node;
node *front=NULL;
node *rear=NULL;
void enqueue(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
        printf("Queue is full\n");
    else
    {
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
        {
            rear=temp;
            front=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}
int isEmpty()
{
    if(front==NULL)
        return 1;
    else
        return 0;
}
int dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        node *p=front;
        int x=p->data;
        front=front->next;
        free(p);
        return x;
    }
}

void display(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {

            printf("%4d",G[i][j]);
        }
        printf("\n");
    }
}

void bfs(int G[][7],int start,int n)
{
    int u=start;
    int visited[7]={0};
    printf("%d",u);
    visited[u]=1;
    enqueue(u);
    while(!isEmpty())
    {
        u=dequeue();
        for(int v=1;v<n;v++)
        {
            if(G[u][v]==1&&visited[v]==0)
            {
                printf(" %d",v);
                visited[v]=1;
                enqueue(v);
            }
        }
    }
}

void dfs(int G[][7],int u/*starting vertex*/,int n,int visited[])
{//we are taking it as static so that in every call it is retained
    int v;
    if(visited[u]==0)
    {

        printf("%d ",u);
        visited[u]=1;
        for(v=1;v<n;v++)
        {
            if(G[u][v]==1&&visited[v]==0)
            {
                dfs(G,v,n,visited);
            }
        }
    }

}

void main()
{
    int start;
    int visited[7]={0};
    printf("Graph is:\n");
    display(7);
    while(1)
    {
        int ch;
        printf("Choices: 1.BFS 2.DFS 3.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the starting vertex(1-%d)",n);
            scanf("%d",&start);
            printf("BFS: ");
            bfs(G,start,7);
            printf("\n");
            break;
        case 2:
            printf("Enter the starting vertex(1-%d)",n);
            scanf("%d",&start);
            printf("DFS: ");
            dfs(G,start,7,visited);
            for(int i=0;i<n;i++)//we are refreshing the visited array for making new dfs call by making visited[i]=0
                visited[i]=0;
            printf("\n");
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("Invalid choice:\n");
            break;
        }
    }
}
