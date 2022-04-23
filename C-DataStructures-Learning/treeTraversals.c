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
void preorder(node *p)
{
    if(p!=NULL)
    {
        printf("%d  ",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
void postorder(node *p)
{
    if(p)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d  ",p->data);
    }
}
void main()
{
    int ch,key;
    while(1)
    {
        printf("Choices: 1.Insert 2.Inorder traversal 3.Preorder traversal 4.Postorder traversal 5.Exit\nEnter Your choice:");
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
            break;
        case 4:
            printf("Postorder traversal: ");
            postorder(root);
            printf("\n");
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}

