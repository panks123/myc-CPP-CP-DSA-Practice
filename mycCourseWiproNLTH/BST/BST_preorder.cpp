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
    if(t==NULL)
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
                cout<<"Cannot enter duplicates!"<<endl;
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
void preOrder(node *t)
{
    if(t)
    {
        cout<<t->data<<" ";
        preOrder(t->left);
        preOrder(t->right);
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
    cout<<"Pre-oreder Traversal :";
    preOrder(root);
    cout<<endl;
}
