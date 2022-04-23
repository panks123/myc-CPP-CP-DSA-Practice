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
int searchBST(node *root,int key)
{
    node *t=root;
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        while(t!=NULL)
        {
            if(t->data==key)
                return 1;
            else if(key<t->data)
            {
                t=t->left;
            }
            else
                t=t->right;
        }
        if(t==NULL)
            return 0;
    }
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
    while(1)
    {
        cout<<"Enter element to search: (enter 0 to exit): ";
        int k;
        cin>>k;
        if(k==0)
            break;
        if(searchBST(root,k))
        {
            cout<<"Found!"<<endl;
        }
        else
        {
            cout<<"Not found!"<<endl;
        }
    }
}

