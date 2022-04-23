//Program to find no. of nodes ,sum of nodes, product of nodes and height of the BST
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
void insertBST(node **root,int key)
{
    node *t=*root;
    node *r;
    if(*root==NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=key;
        *root=temp;
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
            {
                cout<<"Duplicates not allowed!"<<endl;
                return;
            }
        }
        node *temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=key;
        if(key<r->data)
            r->left=temp;
        else
            r->right=temp;
    }
}
void inorder(node *t)
{
    if(t)
    {
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}
int countNodes(node *t)
{
    if(t)
    {
        int x=countNodes(t->left);
        int y=countNodes(t->right);
        return x+y+1;
    }
    else
        return 0;
}
int sumNodes(node *t)
{
    if(t!=NULL)
    {
        int x=sumNodes(t->left);
        int y=sumNodes(t->right);
        return x+y+t->data;
    }
    else
        return 0;
}
long long  productNodes(node *t)
{
    if(t)
    {
        long long x=productNodes(t->left);
        long long y=productNodes(t->right);
        return x*y*t->data;
    }
    else
        return 1;
}
int height(node *t)
{
    if(t)
    {
        int x=height(t->left);
        int y=height(t->right);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter no. of elements in the tree: ";
    cin>>n;
    node *root=NULL;
    cout<<"Enter elements one by one to enter into the tree:";
    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;
        insertBST(&root,key);
    }
    cout<<"In-order Traversal :";
    inorder(root);
    cout<<endl;
    cout<<"No. of nodes: "<<countNodes(root)<<endl;
    cout<<"Sum of nodes: "<<sumNodes(root)<<endl;
    cout<<"Product of nodes: "<<productNodes(root)<<endl;
    cout<<"Height of the tree: "<<height(root)<<endl;
}


