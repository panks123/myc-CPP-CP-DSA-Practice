#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	if(argc>=3)
    {
        int sum=0;
        for(int i=1;i<3;i++)
            sum=sum+atoi(argv[i]);
        printf("%d",sum);
    }
    else
        printf("Insufficient input!");
}
