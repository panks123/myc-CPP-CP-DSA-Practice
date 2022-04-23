#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 10
void main()
{
    int ma,ch,ps,psi[MAX]={0},sa[MAX],ea[MAX],hsa[MAX],hea[MAX],hcount=0,pcount=0;
    int i=0,j=0,k;
    printf("\nEnter total memory available (in MB)");
    scanf("%d",&ma);
    while(1)
    {
       printf("\nThe options available are\n1.Entering prg\n2.deleting a prg\n3.exit\nEnter ur choice");
       scanf("%d",&ch);
       switch(ch)
       {
         case 3:
           printf("\n\nThe memory available is %d MB",ma);
           exit(0);
         case 1:
            printf("\nEnter size of program(in MB)");
            scanf("%d",&ps);
            psi[i]=ps;
            if(ps<=ma)
            {
              pcount++;
              if(!i)
              {
                sa[i]=0;
                ea[i]=ps-1;
              }
              else
              {
                sa[i]=ea[i-1]+1;
                ea[i]=sa[i]+ps-1;
              }
              i++;
              ma-=ps;
            }
            else
            {
                 printf("\nMemory not sufficient for ur prg");
            }
           printf("\n\nprg details");
           printf("\n\nprg num\tmem loc");
           printf("\n---------\t-------");
           for(k=0;k<pcount;k++)
           printf("\n%d\t\t%d-%d",k+1,sa[k],ea[k]);
           if(hcount)
           {
           printf("\nHoles details");
           printf("\nhole num\tmem loc");
           printf("\n---------\t------");
           for(k=0;k<hcount;k++)
              printf("\n\n%d\t\t%d-%d",k+1,sa[k],hea[k]);
           }
          break;
          case 2:
             printf("\nEnter the prg no u want to delete");
             scanf("%d",&ch);
            if(ch>pcount)
            {
              printf("\n no such prg");
              break;
            }
            printf("\n A hole is created b/t mem loc %d & %d",sa[ch-1],ea[ch-1]);
            hcount++;
            hsa[j]=sa[ch-1];
            hea[j]=ea[ch-1];
            sa[ch-1]=ea[ch-1]=-1;
            j++;
            break;
        default:
           printf("\ninvalid choice");
           break;
      }
    }
}
