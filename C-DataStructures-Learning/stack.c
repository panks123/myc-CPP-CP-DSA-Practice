#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *st;
}stack;
int* createStack(struct stack s)
{
    printf("%d",s.top);

}
void main()
{
    struct stack s;
    printf("Enter size of stack:");
    scanf("%d",&s.size);
    printf("%d",s.size);
    s.top=-1;
    s.st[s.size];
    createStack(s);
}
