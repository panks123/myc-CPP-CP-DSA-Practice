//simple O(n) method to find the diameter of the tree
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
int height(node *t,int &dia)    //call by reference is used so as to keep the value of dia unchanged in several recursive calls
{
    if(t==NULL)
        return 0;
    else
    {
        int x=height(t->left,dia);
        int y=height(t->right,dia);
        // update the dia, because diameter of a
       // tree is nothing but maximum value of
       // (left_height + right_height + 1) for each node
        dia=max(dia,x+y+1);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
}
int diameter(node *t)
{
    if(t==NULL)
        return 0;
    else
    {
        int dia=0; // This will store the final answer
        height(t,dia); //with the help of height() the value of dia is changed accordingly and gives the final result
        return dia;
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

    cout<<"Diameter of the tree: "<<diameter(root)<<endl;
}

/*
Diameter of a tree can be calculated by only using the height function, because the diameter of a tree is nothing but maximum value of
(left_height + right_height + 1) for each node. So we need to calculate this value (left_height + right_height + 1) for each node and update the result.
*/
