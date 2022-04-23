//print the middle element of the linked list
//e.g. in case of odd no. of elements: 1->2->3->4->5 :3
//e.g. in case of even no. of elements: 1->2->3->4->5->6 :4
#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}node;
node* createList(int n)
{
    node* head=NULL;
    node *t;
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++)
    {
        int data;
        node *temp=(node*)malloc(sizeof(node));
        cin>>data;
        temp->data=data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            t=head;
        }
        else
        {
            t->next=temp;
            t=t->next;
        }
    }
    return head;
}
void display(node *t)
{
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
node* middleElement(node *head)
{
    node *t=head;
    node *p=head;
    while(t!=NULL&&t->next!=NULL)
    {
        t=t->next;
        t=t->next;
        p=p->next;
    }
    return p;
}
int main()
{
    int n;
    cout<<"Enter no. of nodes in the linked list:";
    cin>>n;
    node *HEAD=createList(n);
    display(HEAD);

    node *mid=middleElement(HEAD);
    cout<<"Middle element= "<<mid->data<<endl;
}
