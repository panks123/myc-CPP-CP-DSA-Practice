#include<stdio.h>
void main()
{
    enum week_days{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
    for(int i=Sun;i<=Sat;i++)
        printf("%d ",i);
}
