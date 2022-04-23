 //here we have implemented recursive insert and recursive search
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;
node *root=NULL;
node* insert(node *t,int key)
{
    //if no elements in the tree
    if (t == NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->left=temp->right=NULL;
        return temp;
    }

    /* Otherwise, recur down the tree */
    else
    {
        if (key < t->data)
        t->left  = insert(t->left, key);
    else if (key > t->data)
        t->right = insert(t->right, key);

    /* return the (unchanged) node pointer */
    return t;
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
node* search(node *t,int key)
{
    if(t==NULL)
        return NULL;
    else
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            return search(t->left,key);
        else
        {
            return search(t->right,key);
        }
    }
}
int height(node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        int x=height(p->left);
        int y=height(p->right);
        return x>y?x+1:y+1;
    }
}
node * inorderPred(node *p)
{
    while(p!=NULL&&p->right!=NULL)
    {
        p=p->right;
    }
    return p;
}
node * inorderSucc(node *p)
{
    while(p!=NULL&&p->left!=NULL)
    {
        p=p->left;
    }
    return p;
}
node* delete(node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(p->left==NULL&&p->right==NULL)
    {
        if(p==root)
        {
            root=NULL;
        }
        free(p);
        return NULL;
    }
    if(key<p->data)
        p->left=delete(p->left,key);
    else if(key>p->data)
        p->right=delete(p->right,key);
    else
    {
        if(height(p->left)>height(p->right))
        {
            node *q=inorderPred(p->left);
            p->data=q->data;
            p->left=delete(p->left,q->data);
        }
        else
        {
            node *q=inorderSucc(p->right);
            p->data=q->data;
            p->right=delete(p->right,q->data);
        }
    }
}
void main()
{
    int ch,key;
    while(1)
    {
        printf("Choices: 1.Insert 2.Inorder traversal 3.Search 4.Delete 5.Exit\nEnter Your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter key to insert:");
            scanf("%d",&key);
            if(root==NULL)
                root=insert(root,key);
            else
                insert(root,key);
            break;
        case 2:
            printf("Inorder traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 3:
            printf("Enter a key to search:");
            scanf("%d",&key);
            node *r=search(root,key);
            if(r!=NULL)
                printf("Found\n");
            else
                printf("Not found\n");
            break;
        case 4:
            printf("Enter key to delete:");
            scanf("%d",&key);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
