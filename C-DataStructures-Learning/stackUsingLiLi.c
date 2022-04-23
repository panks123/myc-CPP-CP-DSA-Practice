#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *top=NULL;
void push(int x)
{

    node *temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}
int pop()
{
    if(top==NULL)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        node *p=top;
        int x=p->data;
        top=top->next;
        free(p);
        return x;
    }
}
void display()
{

    printf("Stack is:\n\n");
    node *t=top;
    while(t!=NULL)
    {
        printf("%d\n",t->data);
        t=t->next;
    }
    printf("\n");
}
int stackTop()
{
    if(top==NULL)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        return top->data;
    }
}
void main()
{

    int ele,popped,Peek,pos,top;
    while(1)
    {
        printf("Options: 1.Push 2.Pop 3.Display 4.stackTop 5.Exit\n");
        int ch;
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter element to push:\n");
            scanf("%d",&ele);
            push(ele);
            break;
        case 2:
            popped=pop();
            printf("Popped element is:%d\n",popped);
            break;
        case 3:
            display();
            break;
        case 4:
            top=stackTop();
            printf("Topmost element of the stack is:%d\n",top);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }

}
