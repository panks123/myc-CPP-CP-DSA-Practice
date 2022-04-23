#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

struct Stack
{
    int size;
    int top;
    node *s[];
};
node *root=NULL;
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
node* stackTop(struct Stack st)
{
    if(isEmpty(&st))
    {

        return NULL;
    }
    else
    {
        return st.s[st.top];
    }
}
void push(struct Stack *st,node *x)
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
node* pop(struct Stack *st)
{
    if(isEmpty(st))
    {
        return NULL;
    }
    else
    {
        node* x=st->s[st->top];
        st->top--;
        return x;
    }
}
void createTree(int pre[],int n)
{
    struct Stack st;
    st.size=100;
    node *temp,*p;
    int i=0;
    root=(node*)malloc(sizeof(node));
    root->data=pre[i++];
    root->left=root->right=NULL;
    p=root;
    while(i<n)
    {
        if(pre[i]<p->data)
        {
            temp=(node*)malloc(sizeof(node));
            temp->data=pre[i++];
            temp->left=temp->right=NULL;
            p->left=temp;
            push(&st,p);
            p=temp;
        }
        else
        {
            if(pre[i]>p->data&&pre[i]<stackTop(st)->data)
            {
                temp=(node*)malloc(sizeof(node));
                temp->data=pre[i++];
                temp->left=temp->right=NULL;
                p->right=temp;
                p=temp;
            }
            else
            {
                p=pop(&st);
            }
        }
    }
}
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->left);
        printf("%d  ",p->data);
        inorder(p->right);
    }
}
void main()
{
    int n;
    printf("Enter size of preorder array:");
    scanf("%d",&n);
    int pre[n];
    printf("Enter %d elements for the preorder:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pre[i]);
    }
    createTree(pre,n);
    printf("Inorder traversal of the created BST is:");
    inorder(root);


}
