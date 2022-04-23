#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *s;
};
//we are implementing the stack using a structure so as to create an array for the stack dynamically at runtime
struct Stack st1;
struct Stack st2;
int isEmpty(struct Stack *st)
{
    if(st->top==-1)
        return 1;
    else
        return 0;
}
int isFull(struct Stack *st)
{
    if(st->top==st->size-1)
        return 1;
    else
        return 0;
}
void push(struct Stack *st,int x)
{
    if(isFull(st))
    {
        printf("Cannot enqueue (Stack1 overflow)\n");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct Stack *st)
{
    if(isEmpty(st))
    {
        return-1;
    }
    else
    {
        int x=st->s[st->top];
        st->top--;
        return x;
    }
}
void enqueue(int x)
{
    push(&st1,x);
}
int dequeue()
{
    if(isEmpty(&st2))
    {
        if(isEmpty(&st1))
        {
            printf("Queue is empty\n");
            return -1;
        }
        else
        {
            while(!isEmpty(&st1))
            {
                int x=pop(&st1);
                push(&st2,x);
            }
            int x=pop(&st2);
            return x;
        }
    }
    else
    {
        int x=pop(&st2);
        return x;
    }
}
void main()
{
    int size;


    printf("Enter the size of queue\n");
    scanf("%d",&size);
    st1.size=size;
    st2.size=size;
    st1.top=-1;
    st2.top=-1;
    st1.s=(int*)malloc(st1.size*sizeof(int));
    st2.s=(int*)malloc(st2.size*sizeof(int));
    while(1)
    {
        printf("Options: 1.Enqueue 2.Dequeue 3.Exit\n");
        int ch,ele;
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter an element to enqueue:");
            scanf("%d",&ele);
            enqueue(ele);
            break;
        case 2:
            ele=dequeue();
            printf("Element dequeued: %d\n",ele);
            break;
        case 3:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}

