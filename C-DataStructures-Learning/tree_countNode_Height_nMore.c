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
int sum(node *t)
{
    if(t!=NULL)
    {
        int x=sum(t->left);
        int y=sum(t->right);
        return x+y+t->data;
    }
    else
        return 0;
}
int counNodes(node *t)
{
    if(t!=NULL)
    {
        int x=counNodes(t->left);
        int y=counNodes(t->right);
        return x+y+1;
    }
    else
        return 0;
}
int countLeafNodes(node *t)
{
    if(t!=NULL)
    {
        int x=countLeafNodes(t->left);
        int y=countLeafNodes(t->right);
        if(t->left==NULL&&t->right==NULL)
        {
            return x+y+1;
        }
        else
            return x+y;
    }
    else
        return 0;
}
int height(node *t)
{
    int x=0,y=0;
    if(t!=NULL)
    {
        x=height(t->left);
        y=height(t->right);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
    else
        return 0;
}
void main()
{
    int ch,key;
    while(1)
    {
        int leafCount,nodeCount;
        printf("Choices: 1.Insert 2.Inorder traversal 3.Count no. of nodes 4.Sum of all nodes 5.Count Leaf and Non-Leaf nodes 6.Height of the Tree 7.Exit\nEnter Your choice:");
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
            nodeCount=counNodes(root);
            printf("No. of nodes in the tree is: %d\n",nodeCount);
            break;
        case 4:
            printf("Sum= %d\n",sum(root));
            break;
        case 5:
            leafCount=countLeafNodes(root);
            printf("No. of  leaf nodes in the tree is: %d\n",leafCount);
            printf("No. of  non-leaf nodes in the tree is: %d\n",counNodes(root)-countLeafNodes(root));
            break;
        case 6:
            printf("Height of the tree :% d\n",height(root)-1);
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}

