//program is not correct
#define SIZE 100
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    char data;
    struct node *next;
}node;
node *top=NULL;
void push(char x)
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
void pop()
{
    if(top==NULL)
    {
        return;
    }
    else
    {
        node *p=top;
        int x=p->data;
        top=top->next;
        free(p);
    }
}
int stackTop()
{
    if(top==NULL)
    {
        return '\0';
    }
    else
    {
        return top->data;
    }
}
int isBalanced(char expr[])
{
    for(int i=0;expr[i]!='\0';i++)
    {
        if(expr[i]=='(')
            push(expr[i]);
        else if(expr[i]==')'||expr[i]=='}'||expr[i]==']')
        {
            if(top==NULL)//means we have not reached '\0' yet but the stack has become empty
                return 0;// in this case not balanced
            else
            {
                char x=expr[i];
                if(x=='}'&&stackTop()=='{')
                {
                    pop();
                }
                if(x==')'&&stackTop()=='(')
                {
                    pop();
                }
                if(x==']'&&stackTop()=='[')
                {
                    pop();
                }
            }
        }
    }
    //After we have reached '\0'
    //1. if stack is empty
    if(top==NULL)
        return 1;//1 means balanced
    //1. if stack is not empty
    else
        return 0;//0 means not balanced
}
void main()
{
    char expr[SIZE];
    printf("Enter an expression for checking balanced parenthesis:\n");
    scanf("%s",expr);//e.g. {([a+b]*[c-d])}
    int x=isBalanced(expr);
    if(x==1)
    {
        printf("%s contains balanced parenthesis\n",expr);
    }
    else
    {
        printf("%s does not contain balanced parenthesis\n",expr);
    }
}


