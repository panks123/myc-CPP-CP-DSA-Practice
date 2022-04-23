#include<stdio.h>
typedef struct process
{
    int pid,at,bt,ct,tat,wt,flag;
}process;
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
        p[i].flag=0;
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
    p[0].ct=p[0].at+p[0].bt;
    p[0].tat=p[0].ct-p[0].at;
    p[0].wt=p[0].tat-p[0].bt;
    p[0].flag=1;
    for(int i=1;i<n;i++)
   {
     for(int j=1;j<n-i;j++)
     {
        if(p[j].bt>p[j+1].bt)
        {
           process temp=p[j];
           p[j]=p[j+1];
           p[j+1]=temp;
        }
     }
   }
   for(int j=1;j<n;j++)
   {
       if(p[j].at<=p[j-1].ct)
       {
           p[j].ct=p[j-1].ct+p[j].bt;
       }
   }
   for(int i=0;i<n;i++)
    {
        p[i].tat=p[i].ct-p[i].at;
        p[i].wt=p[i].tat-p[i].bt;
    }
   printf("After CPU scheduling ,Processes are:\n\n");
   printf("Process_id\tArrival_time\tBurst_time\tCompl._time\tTAT\tWT\n");
   for(int i=0;i<n;i++)
    {
        printf("      %d\t           %d\t             %d\t           %d\t         %d\t %d\n",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
    }
}
