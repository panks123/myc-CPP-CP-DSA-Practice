
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
void levelOrder(node *p)
{
    queue<node *> q;
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        q.push(p);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            if(p->left!=NULL)
            {
                cout<<p->left->data<<" ";
                q.push(p->left);
            }
            if(p->right!=NULL)
            {
                cout<<p->data<<" ";
                q.push(p->right->right);
            }
        }
        cout<<endl;
    }
    else
        cout<<"Tree is empty"<<endl;

}
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
void inOrder(node *t)
{
    if(t)
    {
        inOrder(t->left);
        cout<<t->data<<" ";
        inOrder(t->right);
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
    inOrder(root);
    cout<<endl;
    cout<<"Level order Traversal :";
    levelOrder(root);

}

