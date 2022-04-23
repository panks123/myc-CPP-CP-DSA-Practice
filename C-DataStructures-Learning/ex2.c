#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",sizeof(int));
    printf("%u\n",p);
    printf("%u\n",p+1);
    int arr[5];
    char d='a';
    char *c=&d;
    printf("%u\n",c);
    printf("c+1 :%u\n",c+1);
    p=(int*)c;
    printf("%u\n",p);
    printf("p+1 :%u\n",p+1);
    printf("p-1 :%u\n",p-1);
    printf("z:%d\n",p>p+1);
    printf("z:%d\n",p>p-1);
    p=0;
    printf("p=0:%d\n",p);
    p=NULL;
    printf("p=0:%d\n",p);
}
