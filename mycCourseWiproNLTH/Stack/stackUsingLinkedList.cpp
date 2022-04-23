#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int data;
    struct Stack *next;
};
void push(struct Stack **top,int ele)
{
    struct Stack *temp=(struct Stack *)malloc(sizeof(struct Stack));
    temp->next=NULL;
    temp->data=ele;
    if(temp==NULL)
        cout<<"Stack overflow"<<endl;
    else
    {
        temp->next=*top;
        *top=temp;
    }
}
int pop(struct Stack **top)
{
    if(*top==NULL)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        struct Stack *t=*top;
        int x=t->data;
        struct Stack *p=*top;
        t=t->next;
        *top=t;
        free(p);
    }
}
int stackTop(struct Stack *top)
{
    if(top==NULL)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}
void display(struct Stack *t)
{
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    int ch,ele,popped,stack_top;
    struct Stack *top=NULL;
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
            push(&top,ele);
            break;
        case 2:
            popped=pop(&top);
            cout<<"Popped element: "<<popped<<endl;
            break;
        case 3:
            stack_top=stackTop(top);
            cout<<"Stack top : "<<stack_top<<endl;
            break;
        case 4:
            cout<<"Stack is: ";
            display(top);
            break;
        case 5:
            exit(1);
            break;
        default:
            cout<<"Enter valid choice"<<endl;
        }
    }
}
