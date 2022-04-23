#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 100
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
int isOperand(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
        return 0;
    else
        return 1;
}
int valueOfPostfix(char *postfix)
{
    int x,y,result;
    for(int i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            y=pop();
            x=pop();
            switch(postfix[i])
            {
            case '+':
                result=x+y;
                break;
             case '-':
                result=x-y;
                break;
             case '*':
                result=x*y;
                break;
             case '/':
                result=x/y;
                break;
             case '^':
                result=pow(x,y);
                break;
            }
            push(result);
        }
    }
    return top->data;
}
void main()
{
    //char *postfix="234*+82/-";
    char *postfix=(char*)malloc(SIZE*sizeof(char));
    printf("Enter a postfix expression to evaluate its value:");
    scanf("%s",postfix);
    int result=valueOfPostfix(postfix);
    printf("\n Result= %d\n",result);
}
