#include<stdio.h>
#define max 20
int graph[max][max];
void create_graph(int n,int max_edges)
{
    int origin,destination;
    printf("Note: Enter the edge between two valid nodes e.g. 1 2 AND if you want to stop giving further edges enter 0 0\n");
    for(int i=1;i<max_edges;i++)
    {
        printf("Enter two nodes for an edge :");
        scanf("%d %d",&origin,&destination);
        if(origin==0&& destination==0)
        {
            break;
        }
        else if(origin<=0||destination<=0||origin>n||destination>n)
        {
            printf("Invalid input\n");
        }
        else if(origin==destination)
        {
            printf("Invalid input (self loops are not allowed)\n");
        }
        else
        {
            graph[origin][destination]=1;
            graph[destination][origin]=1;
        }
    }
}
void display(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {

            printf("%4d",graph[i][j]);
        }
        printf("\n");
    }
}
void main()
{

    int n;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    for(int j=0;j<=n;j++)
    {
        graph[0][j]=0;

    }
    for(int j=0;j<=n;j++)
    {
        graph[j][0]=0;

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            graph[i][j]=0;
        }
    }

    int max_edges=(n*(n-1))/2;
    create_graph(n,max_edges );
    printf("Adjacency matrix of the graph is :\n\n");
    display(n);

}
