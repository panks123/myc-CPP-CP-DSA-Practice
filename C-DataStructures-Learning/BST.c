#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;
node *root=NULL;
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
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->left);
        printf("%d  ",p->data);
        inorder(p->right);
    }
}
node* search(int key)
{
    node *t=root;
    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->left;
        else
            t=t->right;
    }
    return NULL;//in case of key not found
}

void main()
{
    int ch,key;
    while(1)
    {
        printf("Choices: 1.Insert 2.Inorder traversal 3.Search 4.Exit\nEnter Your choice:");
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
            printf("Enter a key to search:");
            scanf("%d",&key);
            node *r=search(key);
            if(r!=NULL)
                printf("Found\n");
            else
                printf("Not found\n");
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
