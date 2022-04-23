#include<stdio.h>
int main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Array elements:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
