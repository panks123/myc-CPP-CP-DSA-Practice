#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
    if(argc>=2)
    {
	int n=atoi(argv[1]);
	int a=n;
	int s=0;
	while(n>0)
	{
		int r=n%10;
		s=s*10+r;
		n/=10;
	}
	if(a==s)
		printf("Palindrome");
	else
		printf("Not Palindrome");
    }
     else
     {
        printf("Insufficient input!");
	}	
}
