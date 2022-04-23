#include<iostream>
using namespace std;
struct Stack
{
    int size;
    int *s;
    int top;
};
int isEmpty(struct Stack *st)
{
    if(st->top==-1)
        return 1;
    return 0;
}
int isFull(struct Stack *st)
{

    if(st->top==st->size-1)
        return 1;
    return 0;
}
void push(struct Stack *st,int ele)
{
    if(isFull(st))
        cout<<"Cannot push(Stack overflow)"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=ele;
    }
}
int pop(struct Stack *st)
{
    if(isEmpty(st))
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        int x=st->s[st->top];
        st->top--;
        return x;
    }
}
int stackTop(struct Stack st)
{
    if(isEmpty(&st))
    {
        cout<<"Stack underflow"<<endl;
        return-1;
    }
    else
        return st.s[st.top];
}
void display(struct Stack st)
{
    for(int i=st.top;i>=0;i--)
        cout<<st.s[i]<<" ";
    cout<<endl;
}
int main()
{
    int ch,ele,popped,stack_top;
    struct Stack st;
    cout<<"Enter the size of stack : ";
    cin>>st.size;
    st.top=-1;
    st.s=(int*)malloc(st.size*sizeof(int));
    while(1)
    {
        printf("Options are: 1.Push 2.Pop 3.Stack top 4. Display 5.Exit\n");
        printf("Enter your choice: ");
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter element to push: ";
            cin>>ele;
            push(&st,ele);
            break;
        case 2:
            popped=pop(&st);
            cout<<"Popped element: "<<popped<<endl;
            break;
        case 3:
            stack_top=stackTop(st);
            cout<<"Stack top : "<<stack_top<<endl;
            break;
        case 4:
            cout<<"Stack is: ";
            display(st);
            break;
        case 5:
            exit(1);
            break;
        default:
            cout<<"Enter valid choice"<<endl;
        }
    }
}
