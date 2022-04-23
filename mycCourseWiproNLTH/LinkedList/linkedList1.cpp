#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}node;
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
}
void createList(node **head,int n)
{
    cout<<"Enter "<<n<<" elements:";
    node *p=*head;
    for(int i=0;i<n;i++)
    {
        node *temp=(node*)malloc(sizeof(node));
        cin>>temp->data;
        temp->next=NULL;
        if(*head==NULL)
        {
            *head=temp;
            p=temp;
        }
        else
        {
            p->next=temp;
            p=temp;
        }
    }
}
void printReverse(node *t)
{
    if(t)
    {
        printReverse(t->next);
        cout<<t->data<<"->";
    }
}
int main()
{
    int n;
    cout<<"Enter no. of elements in the linked list:";
    cin>>n;
    node *HEAD=NULL;
    createList(&HEAD,n);
    display(HEAD);
    cout<<"Reverse :";
    printReverse(HEAD);
}

