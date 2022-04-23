#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
typedef struct node
{
    char data;
    struct node *next;
    int inStackPrec;
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
char pop()
{
    if(top==NULL)
    {
        printf("Stack underflow\n");
        return '\0';
    }
    else
    {
        node *p=top;
        char x=p->data;
        top=top->next;
        free(p);
        return x;
    }
}
char stackTop()
{
    if(top==NULL)
    {
        printf("Stack underflow\n");
        return '\0';
    }
    else
    {
        return top->data;
    }
}
int isOperand(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='('||c==')')
        return 0;
    else
        return 1;
}
int outStackPrec(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 3;
    else if(c=='^')
        return 6;
    else if(c=='(')
        return 7;
    else if(c==')')
        return 0;
}
char * convertToPostfix(char *infix)
{
    char *postfix;
    int len=strlen(infix);
    postfix=(char*)malloc(sizeof(char)*(len+2));
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(outStackPrec(infix[i])==top->inStackPrec)
            {
                pop();
                i++;
            }
            else if(outStackPrec(infix[i])>top->inStackPrec)
            {
                push(infix[i]);
                if(infix[i]=='+'||infix[i]=='-')
                {
                    top->inStackPrec=2;
                }
                else if(infix[i]=='*'||infix[i]=='/')
                {
                    top->inStackPrec=4;
                }
                else if(infix[i]=='^')
                {
                    top->inStackPrec=5;
                }
                else if(infix[i]=='(')
                {
                    top->inStackPrec=0;
                }
                i++;
            }
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL)
    {
        if(stackTop()=='#')
          pop();
        else
            postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
void main()
{
    char *infix;
    infix=(char*)malloc(sizeof(char)*SIZE);
    printf("Enter an infix expression:");
    scanf("%s",infix);
    push('#');
    top->inStackPrec=-1;
    char *postfix=convertToPostfix(infix);

    printf("\nInfix: %s\n\n",infix);
    printf("Postfix: %s\n",postfix);

}

