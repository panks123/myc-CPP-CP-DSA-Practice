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
void postOrder(node *t)
{
    if(t)
    {
        postOrder(t->left);
        postOrder(t->right);
        cout<<t->data<<" ";
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
    cout<<"Post-order Traversal :";
    postOrder(root);
    cout<<endl;
}
