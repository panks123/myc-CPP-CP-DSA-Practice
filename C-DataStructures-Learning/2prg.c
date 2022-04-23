#include <stdio.h>

int main()
{

	int ar[100000] =  {5 ,6, 4, 6, 5,12, 387, 15, 162, 5,14, 162, 92, 387, 7, 748,14, 5, 12, 387,17, 952, 12, 92, 398, 849,14, 5, 92, 12, 387};	
	int no=5,sum=0,i,j,temp,count=0;

	for(i=0;i<5;i++)
		sum+=ar[i];

	for(i=4;i<sum;i++)
		for(j=5;j<sum;j++)
		{
			if (ar[j] > ar[j+1]) 
			{	
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1]=temp;
			} 
            	 }
	temp=0;
	for(i=4;i<sum;i++)
	{
		count = 0;		
		for(j=i;j<sum;j++)		
		{
			if(ar[i]==ar[j])
				count++;	
		}
		if(count > 2)
			temp++;

	}
		
		printf("%d ",temp+1);

	return 0 ;
}
