#include<bits/stdc++.h>
#define SIZE 100
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
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return 0;
    else
        return 1;
}
int precedence(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else
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
            if(precedence(infix[i])>precedence(stackTop()))
            {
                push(infix[i]);
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
int main()
{
    //char *infix="a+b*c";

    char *infix;
    infix=(char*)malloc(sizeof(char)*SIZE);
    printf("Enter an infix expression:");
    scanf("%[^\n]s",infix);
    push('#');
    char *postfix=convertToPostfix(infix);

    printf("\nInfix: %s\n",infix);
    printf("Postfix: %s",postfix);
}
