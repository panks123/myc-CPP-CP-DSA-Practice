//creating a linked list by inserting at the end
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void display(struct node *p)
{
    printf("Linked list is: ");
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node* insertintoSorted(struct node *p,int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(p==NULL)
    {
        p=temp;
    }
    else
    {
        if(x<=p->data)
       {
           temp->next=p;
           p=temp;
       }
       else
       {
           struct node *q=p,*r=NULL;
           while(q!=NULL&&q->data<x)
           {
               r=q;
               q=q->next;
           }
           temp->next=q;
           r->next=temp;
       }
    }
    return p;
}

void main()
{
    int n;
    printf("Enter no. of elements in the linked list:");
    scanf("%d",&n);
    struct node *head=NULL;
    for(int i=1;i<=n;i++)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter value to insert:");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            struct node *p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;
        }
    }
    display(head);
    printf("\n");
    printf("Insert an element into the sorted linked list:\n");
    int ele;
    scanf("%d",&ele);
    head=insertintoSorted(head,ele);
    display(head);
    printf("\n");
}
