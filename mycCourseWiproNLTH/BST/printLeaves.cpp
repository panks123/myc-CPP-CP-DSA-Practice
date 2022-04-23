//Program to print all the leaves node and count no. of leaves
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
void printLeaves(node *t,int &leavesCount)
{
    if(t)
    {

        if(t->left==NULL&&t->right==NULL)
        {
            leavesCount++;
            cout<<t->data<<" ";
        }
        printLeaves(t->left,leavesCount);
        printLeaves(t->right,leavesCount);
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
    cout<<"Leaves of BST: ";
    int leavesCount=0;
    printLeaves(root,leavesCount);
    cout<<endl;
    cout<<"No. of leaves = "<<leavesCount;
}
