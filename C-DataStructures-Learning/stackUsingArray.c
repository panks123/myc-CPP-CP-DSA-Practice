#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *s;
};
//we are implementing the stack using a structure so as to create an array for the stack dynamically at runtime
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
        printf("Cannot push (Stack overflow)\n");
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
        printf("Cannot pop (stack underflow)\n");
        return-1;
    }
    else
    {
        int x=st->s[st->top];
        st->top--;
        return x;
    }
}
int peek(struct Stack st,int pos)
{
    if(st.top-pos+1<0)
    {
        printf("This position does not exist\n");
        return -1;
    }
    else
    {
        return st.s[st.top-pos+1];
    }
}
int stackTop(struct Stack st)
{
    if(isEmpty(&st))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return st.s[st.top];
    }
}
void display(struct Stack st)
{
    printf("Stack is :\n\n");
    for(int i=st.top;i>=0;i--)
    {
        printf("%d\n",st.s[i]);
    }
    printf("\n");
}
void main()
{
    struct Stack st;
    printf("Enter the size of array:\n");
    scanf("%d",&st.size);
    st.top=-1;
    st.s=(int*)malloc(st.size*sizeof(int));//dynamically creating an array for the stack
    while(1)
    {
        printf("Options are: 1.Push 2.Pop 3.Display 4.Peek 5.StackTop 6.Exit\n");
        int choice;
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        int ele,popped,pos,peekEle,stack_top;
        switch(choice)
        {
        case 1:
            {
            ele;
            printf("Enter an element to push:\n");
            scanf("%d",&ele);
            push(&st,ele);
            break;
            }
        case 2:
            popped=pop(&st);
            printf("Popped element: %d\n",popped);
            break;
        case 3:
            display(st);
            break;
        case 4:
            pos;
            printf("Enter position:\n");
            scanf("%d",&pos);
            peekEle=peek(st,pos);
            printf("Element at position %d from top is:%d\n",pos,peekEle);
            break;
        case 5:
            stack_top=stackTop(st);
            printf("Top of the stack is: %d\n",stack_top);
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
