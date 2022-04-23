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
        node *temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=key;
        while(t!=NULL)
        {
            r=t;
            if(key<t->data)
            {
                t=t->left;
            }
            else if(key>t->data)
                t=t->right;
            else
            {
                cout<<"Cannot enter duplicate data!";
                return;
            }
        }
        if(key<r->data)
            r->left=temp;
        else
            r->right=temp;
    }
    cout<<"Element entered into the tree successfully!"<<endl;
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
    cout<<"Inoreder Traversal :";
    inorder(root);
    cout<<endl;
}
