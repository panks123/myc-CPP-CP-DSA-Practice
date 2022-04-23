#include<bits/stdc++.h>
using namespace std;
typedef struct Stack
{
    int data;
    struct Stack *next;
}Stack;
void push(Stack **top,int ele)
{
    Stack *temp=(Stack*)malloc(sizeof(Stack));
    if(temp==NULL)
        return;
    else
    {
        temp->data=ele;
        temp->next=*top;
        *top=temp;
    }
}
int pop(Stack **top)
{
    if(top==NULL)
        return -1;
    else
    {
        Stack *t=*top;
        int x=t->data;
        Stack *p=*top;
        t=t->next;
        *top=t;
        free(p);
        return x;
    }
}
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^')
        return 0;
    else
        return 1;
}
int evaluatePostfix(char postfix[])
{
    Stack *top=NULL;
    int x,y;
    for(int i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
        {
            push(&top,postfix[i]-48) ;   // as we need to convert character digits to Actual digits so we have to subtract by '0' i.e. ASCII 48
        }
        else
        {
            y=pop(&top);
            x=pop(&top);
            switch(postfix[i])
            {
            case '+':
                push(&top,x+y);
                break;
            case '-':
                push(&top,x-y);
                break;
            case '*':
                push(&top,x*y);
                break;
            case '/':
                push(&top,x/y);
                break;
            case '^':
                push(&top,(int)pow(x,y));
                break;
            }
        }
    }
    if(top!=NULL)
        return pop(&top);
    else
        return 0;
}
int main()
{
    cout<<"Enter postfix expression to evaluate: ";
    char postfix[100];
    scanf("%[^\n]s",postfix);
    int result=evaluatePostfix(postfix);
    cout<<"Result= "<<result;
}
