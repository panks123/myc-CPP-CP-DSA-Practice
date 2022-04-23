
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
// To be reviewed , why it is not showing correct result
void iterativeInOrder(node *p)
{
    stack<node *> st;
    while((p)||(!st.empty()))
    {
        if(p)
        {
            st.push(p);
            p=p->left;
        }
        else
        {
            node *p=st.top();
            st.pop();
            cout<<p->data<<" ";
            p=p->right;
        }
    }
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
    cout<<"Result of Recursive In-order Traversal :";
    inOrder(root);
    cout<<endl;
    cout<<"Result of Iterative In-order Traversal :";
    iterativeInOrder(root);
    cout<<endl;
}

