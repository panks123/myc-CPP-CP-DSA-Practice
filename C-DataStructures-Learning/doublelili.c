//inserting in a doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d  ",p->data);
        display(p->next);
    }
}
int countNodes(struct node* p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
struct node* createlist(int n,struct node *head)
{
    printf("Enter %d elements to create a linked list:\n",n);
    struct node *p;
    for(int i=1;i<=n;i++)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->prev=NULL;
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            p=head;
        }
        else
        {
            temp->prev=p;
            p->next=temp;
            p=p->next;
        }
    }
    return head;
}
struct node* insert(struct node* Head)
{
    int pos;
    printf("Enter position to insert(0-%d):",countNodes(Head));
    scanf("%d",&pos);
    if(pos<0||pos>countNodes(Head))
    {
        printf("Invalid position\n");
    }
   else if(pos==0)
   {
       struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter element to insert:");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;
       Head->prev=temp;
       temp->next=Head;
       Head=temp;
       return Head;
   }
   else if(pos==countNodes(Head))
   {
       struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter element to insert:");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;
        if(Head==NULL)
        {
            Head=temp;
        }
        else
        {
            struct node *p=Head;
            while(p->next!=NULL)
                p=p->next;
            p->next=temp;
            temp->prev=p;
        }
   }
    else if(pos>0&&pos<countNodes(Head))
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter element to insert:");
        scanf("%d",&temp->data);
        temp->prev=NULL;
        temp->next=NULL;
        if(Head==NULL)
        {
            Head=temp;
        }
        else
        {
            struct node *p=Head;
            for(int i=1;i<pos;i++)
                p=p->next;
            temp->next=p->next;
            p->next->prev=temp;
            p->next=temp;
            temp->prev=p;
        }

    }
    return Head;
}
struct node* Delete(struct node *Head)
{
    if(Head==NULL)
    {
        printf("Empty list  Cannot delete...\n");
    }
    else
    {
        int pos;
        printf("Enter position to delete (1-%d):\n",countNodes(Head));
        scanf("%d",&pos);
        if(pos<1||pos>countNodes(Head))
        {
            printf("Invalid position...\n");
        }
        else if(pos==1)
        {
            struct node*p=Head;
            Head=Head->next;
            Head->prev=NULL;
            p->next=NULL;
            free(p);
        }
        else
        {
            struct node *p=Head;
            for(int i=1;i<pos;i++)
            {
                p=p->next;
            }
            p->prev->next=p->next;
            if(p->next!=NULL)
            {
                p->next->prev=p->prev;
            }
        }
    }
    return Head;
}
void main()
{
    int n;
    struct node *HEAD=NULL;
    printf("Enter no. of elements in the doubly linked list:\n");
    scanf("%d",&n);
    HEAD=createlist(n,HEAD);
    printf("Linked list is:\n");
    display(HEAD);
    printf("\n");
    printf("No. of elements in the linked list is:%d",countNodes(HEAD));
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=Delete(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=Delete(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=Delete(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=Delete(HEAD);
    display(HEAD);
    printf("\n");
}
