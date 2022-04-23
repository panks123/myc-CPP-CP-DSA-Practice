#include<stdio.h>
#include<stdlib.h>
typedef struct node//for tree node
{
    int data;
    struct node* left;
    struct node* right;
}node;
typedef struct Node// for stack node using linked list
{
    struct node *data;//data stored in the stack will be the address of node of the tree
    struct Node *next;
}Node;
typedef struct Qnode//for Queue node using linked list
{
    struct node *data;
    struct Qnode *next;
}Qnode;
Qnode *front=NULL;
Qnode *rear=NULL;

node *root=NULL;
Node *top=NULL;
int isQEmpty()
{
    if(front==NULL)
        return 1;
    else
        return 0;
}
void enqueue(node *x)
{
    Qnode *temp=(Qnode*)malloc(sizeof(Qnode));
    if(temp==NULL)
        printf("Queue is full\n");
    else
    {
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
        {
            rear=temp;
            front=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}

node* dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return NULL;
    }
    else
    {
        Qnode *p=front;
        node *x=p->data;
        front=front->next;
        free(p);
        return x;
    }
}
void push(node *x)
{

    Node *temp=(Node*)malloc(sizeof(Node));
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
int isEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
node* pop()
{
    if(top==NULL)
    {
        printf("Stack underflow\n");
        return NULL;
    }
    else
    {
       Node *p=top;
       node *x=p->data;
       top=top->next;
       free(p);
       return x;
    }
}
void insert(int key)
{
    node *t=root;
    node *r;
    if(root==NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
    }
    else
    {
        while(t!=NULL)
        {
            r=t;
            if(key<t->data)
                t=t->left;
            else if(key>t->data)
                t=t->right;
            else
                return;//for no duplicates in the BST
        }
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->left=NULL;
        temp->right=NULL;
        if(key<r->data)
            r->left=temp;
        else
            r->right=temp;
    }
}
void inorder(struct node *t)
{
    while(t!=NULL||!isEmpty())
    {
        if(t!=NULL)
        {
            push(t);
            t=t->left;
        }
        else
        {
            t=pop();
            printf("%d  ",t->data);
            t=t->right;
        }
    }
}
void preorder(node *t)
{
    while(t||!isEmpty())
    {
        if(t)
        {
            printf("%d  ",t->data);
            push(t);
            t=t->left;
        }
        else
        {
            t=pop();
            t=t->right;
        }
    }
}
/*void postorder(node *t)
{
    long int temp;//********somthing incorrect
    while(t!=NULL||!isEmpty())
    {
        if(t!=NULL)
        {
            push(t);
            t=t->left;
        }
        else
        {
            temp=pop();
            if(temp>0)
            {
                push(-temp);
                t=((node*)temp)->right;
            }
            else
            {

                printf("%d  ",((node*)temp)->data);
                t=NULL;
            }
        }
    }
}*/
void levelOrder(node *t)
{
    printf("%d  ",t->data);
    enqueue(t);
    while(!isQEmpty())
    {
        t=dequeue();
        if(t->left!=NULL)
        {
            printf("%d  ",t->left->data);
            enqueue(t->left);
        }
        if(t->right!=NULL)
        {
            printf("%d  ",t->right->data);
            enqueue(t->right);
        }
    }
}
void main()
{
    int ch,key;
    while(1)
    {
        printf("Choices: 1.Insert 2.Inorder traversal 3.Preorder traversal 4.Postorder traversal 5.Level Order 6.Exit\nEnter Your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter key to insert:");
            scanf("%d",&key);
            insert(key);
            break;
        case 2:
            printf("Inorder traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 3:
            printf("Preorder traversal: ");
            preorder(root);
            printf("\n");
            break;/*
        case 4:
            printf("Postorder traversal: ");
            postorder(root);
            printf("\n");
            break;*/
        case 5:
            printf("Level Order traversal: ");
            levelOrder(root);
            printf("\n");
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
