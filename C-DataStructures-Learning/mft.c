#include<stdio.h>
#include<conio.h>
void main()
{
    int m,p,s,p1;
    int m1[4],i,f,f1=0,f2=0,fra1,fra2,s1;
    printf(" Enter the memory size:");
    scanf("%d",&m);
    printf(" Enter the no of partitions:");
    scanf("%d",&p);
    s=m/p;
    printf(" Each partition size is:%d",s);
    printf("\n Enter the no of processes:");
    scanf("%d",&p1);
    for(i=0;i<p1;i++)
    {
        printf("\n Enter the memory required for process %d:",i+1);
        scanf("%d",&m1[i]);
        if(m1[i]<=s)
        {

           printf("\n Process is allocated in partition %d",i+1);
           fra1=s-m1[i];
           printf("\n Internal fragmentation for process is:%d",fra1);
           f1=f1+fra1;
        }
        else
        {
            printf("\n Process not allocated in partition %d",i+1);
            fra2=m1[i];
            f2=f2+fra2;
            printf("\n External fragmentation for partition is:%d",fra2);
        }
    }
    printf("\n Process   memory    allocated memory");
    for(i=0;i<p1;i++)
        printf("\n %5d\t %5d\t   %5d",i+1,s,m1[i]);
    printf("\n Total internal fragmentation is:%d\n",f1);
    printf("\n Total external fragmentation is:%d\n",f2);
}
