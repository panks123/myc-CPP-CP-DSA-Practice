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
int countNodes(node *p)
{
    int counts=0;
    while(p!=NULL)
    {
        counts++;
        p=p->next;
    }
    return counts;
}
void insert(node **head)
{
    int pos;
    cout<<"Enter position to insert:";
    cin>>pos;
    if(pos<1||pos>countNodes(*head)+1)
    {
        cout<<"Invalid position"<<endl;
    }
    else
    {
        node* temp=(node*)malloc(sizeof(node));
        cout<<"Enter element to insert:";
        cin>>temp->data;
        temp->next=NULL;
        if(pos==1)
        {
            if(*head==NULL)
            {
                *head=temp;
            }
            else
            {
                temp->next=*head;
                *head=temp;
            }
            cout<<"Element inserted\n";
        }
        else
        {
            node *p=*head;
            for(int i=1;i<pos-1;i++)
            {
                p=p->next;
            }
            temp->next=p->next;
            p->next=temp;
            cout<<"Element inserted\n";
        }
    }
}
void searchKey(node *p,int key)
{
    if(p==NULL)
    {
        cout<<"Not found!"<<endl;
    }
    else
    {
        while(p!=NULL)
        {
            if(p->data==key)
            {
                cout<<"Found!"<<endl;
                break;
            }

            p=p->next;
        }
        if(p==NULL)
        {
            cout<<"Not Found!"<<endl;
        }
    }
}
void deleteNode(node **head)
{
    if(*head==NULL)
        cout<<"Linked list is empty!"<<endl;
    else
    {
        int pos;
        cout<<"Enter position to delete:";
        cin>>pos;
        if(pos<1||pos>countNodes(*head))
            cout<<"Invalid position!"<<endl;
        else
        {
            if(pos==1)
            {
                node *p=*head;
                *head=p->next;
                p->next=NULL;
                free(p);
            }
            else
            {
                node *p=*head,*q=NULL;
                for(int i=1;i<pos;i++)
                {
                    q=p;
                    p=p->next;
                }
                q->next=p->next;
                p->next=NULL;
                free(p);
            }
        }
    }
}
void isSorted(node *head)
{
    node* p=head;
    if(head==NULL)
        cout<<"Linked list is empty";
    else if(head!=NULL&&head->next==NULL)
        cout<<"Sorted"<<endl;
    else
    {
        while(p->next!=NULL)
        {
            if(p->data>p->next->data)
            {
                cout<<"Not sorted"<<endl;
                break;
            }
            p=p->next;
        }
        if(p->next==NULL)
        {
            cout<<"Sorted"<<endl;
        }
    }
}
void swap(node *p,node *q)
{
    int t=p->data;
    p->data=q->data;
    q->data=t;
}
void sortList(node **head)    //bubble sort in linked list
{
    int swapped;
    if(*head==NULL)
    {
        cout<<"Linked list is empty";
    }
    else
    {
        node *p;
        node* last=NULL;
        do
        {
            swapped=0;
            p=*head;
            while(p->next!=last)
            {
                if(p->data>p->next->data)
                {
                    swap(p,p->next);
                    swapped=1;
                }
                p=p->next;
            }
            last=p;
        }while(swapped==1);
    }
}
void removeDuplicates(node **head) //this operation is performed after sorting the linked list
{
    if(*head==NULL)
        cout<<"Linked list is empty";
    else
    {
        node *q=*head;
        node *p=q->next;
        while(p!=NULL)
        {
            if(q->data==p->data)
            {
                q->next=p->next;
                p->next=NULL;
                free(p);
                p=q->next;
            }
            else
            {
                p=p->next;
                q=q->next;
            }
        }
    }
}
void reverseList(node **head)
{
    if(*head!=NULL)
    {
        node *p=*head;
        node *q=NULL,*r=NULL;
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        *head=q;
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
    cout<<"No. of nodes : "<<countNodes(HEAD)<<endl;
    insert(&HEAD);
    display(HEAD);
    int key;
    cout<<"Enter key to search:";
    cin>>key;
    searchKey(HEAD,key);
    deleteNode(&HEAD);
    display(HEAD);
    isSorted(HEAD);
    sortList(&HEAD);
    cout<<"After sorting:"<<endl;
    display(HEAD);
    removeDuplicates(&HEAD);
    cout<<"After removing the duplicates:"<<endl;
    display(HEAD);
    reverseList(&HEAD);
    cout<<"After reversing the list:"<<endl;
    display(HEAD);
}
