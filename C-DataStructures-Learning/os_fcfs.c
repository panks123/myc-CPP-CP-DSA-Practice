#include<stdio.h>
typedef struct process
{
    int pid,at,bt,ct,tat,wt;
}process;
int max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
void main()
{
    int n;

    printf("Enter no. of processes\n");
    scanf("%d",&n);
    process p[n];
    for(int i=0;i<n ;i++)
    {
        printf("Enter arrival time of process no. %d\n",i);
        scanf("%d",&p[i].at);
    }
    for(int i=0;i<n;i++)
    {
        p[i].pid=i;

        printf("Enter burst time of process no. %d\n",i);
        scanf("%d",&p[i].bt);
        p[i].ct=0;
        p[i].tat=0;
        p[i].wt=0;
    }
    printf("Processes are:\n\n");
    printf("Process_id\tArrival_time\tBurst_time\n");
    for(int i=0;i<n;i++)
    {
        printf("      %d\t           %d\t             %d\n",p[i].pid,p[i].at,p[i].bt);
    }
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n-i;j++)
     {
        if(p[j].at>p[j+1].at)
        {
           process temp=p[j];
           p[j]=p[j+1];
           p[j+1]=temp;
        }
     }
   }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            p[i].ct=p[i].at+p[i].bt;
        }
        else
        {
            p[i].ct=max(p[i].at,p[i-1].ct)+p[i].bt;
        }
    }
    for(int i=0;i<n;i++)
    {
        p[i].tat=p[i].ct-p[i].at;
        p[i].wt=p[i].tat-p[i].bt;
    }
    printf("After CPU scheduling ,Processes are:\n\n");
    printf("Process_id\tArrival_time\tBurst_time\tCompl._time\tTAT\t  WT\n");
    for(int i=0;i<n;i++)
    {
        printf("      %d\t           %d\t             %d\t           %d\t         %d\t  %d\n",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
    }

}
