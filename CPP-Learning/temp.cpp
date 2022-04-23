#include<stdio.h>
struct dob{
	int d;
	int m;
	int y;
};
int main()
{
	struct dob d1={1,2,3};
	
	struct dob *ptr=&d1;
	
	printf("D.O.B. : %d/%d/%d ",ptr->d,ptr->m,ptr->y);
	printf("D.O.B. : %d/%d/%d ",d1.d,ptr->m,ptr->y);
	return 0;
}
