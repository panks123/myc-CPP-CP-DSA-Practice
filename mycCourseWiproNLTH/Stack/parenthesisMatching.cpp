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
        return;
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
        //cout<<"Stack underflow"<<endl;
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
        //cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}
int checkBalance(char exp[])
{
    struct Stack *top=NULL;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(&top,exp[i]);
        }
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            else
                pop(&top);
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}
int main()
{
    char exp[100];
    cout<<"Enter expression to check balance parenthesis: ";
    scanf("%[^\n]s",exp);
    if(checkBalance(exp))
        cout<<"Balanced";
    else
        cout<<"Not balanced";
}
