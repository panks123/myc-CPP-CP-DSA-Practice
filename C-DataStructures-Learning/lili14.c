#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head=NULL;
void display(struct node *p)
{
    static int flag=0;
    if(p!=head||flag==0)
    {
        flag=1;
        printf("%d  ",p->data);
        display(p->next);
    }
    flag=0;
}
int countNodes(struct node *head)
{
    struct node *p=head;
    int count=0;
    do
    {
        count++;
        p=p->next;
    }while(p!=head);
    return count;
}
struct node* createlist(int n,struct node *head)
{
    printf("Enter %d elements to create a circular linked list:\n",n);
    struct node *p;
    for(int i=1;i<=n;i++)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            p=head;
        }
        else
        {
            p->next=temp;
            p=p->next;
        }
        if(i==n)
        {
            p->next=head;
        }
    }
    return head;
}
struct node* insert(struct node *Head)
{
    int pos;
    printf("Enter position to insert:");
    scanf("%d",&pos);
    if(pos<0||pos>countNodes(Head))
    {
        printf("Invalid position to insert...\n");
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter key to insert:");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(pos==0)
        {
            if(Head==NULL)
            {
                Head=temp;
                temp->next=Head;
            }
            struct node *p=Head;
            while(p->next!=Head)
            {
                p=p->next;
            }
            p->next=temp;
            temp->next=Head;
            Head=temp;
        }
        else if(pos>0&&pos<countNodes(Head))
        {
            struct node *p=Head;
            for(int i=1;i<pos;i++)
            {
                p=p->next;
            }
            temp->next=p->next;
            p->next=temp;
        }
        else if(pos==countNodes(Head))
        {
            struct node *p=Head;
            for(int i=1;i<pos;i++)
            {
                p=p->next;
            }
            p->next=temp;
            temp->next=Head;
        }
    }
    return Head;
}
struct node* Delete(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        int pos;
        printf("Enter position to delete(%d-%d):",1,countNodes(head));
        scanf("%d",&pos);
        if(pos<1||pos>countNodes(head))
            printf("Invalid position...\n");
        else if(pos >1&&pos<countNodes(head))
        {
            struct node *p,*q=head;
            do
            {
                q=q->next;
            }while(q->next!=head);
            p=head;
            head=head->next;
            q->next=head;
            free(p);
            return head;
        }
        else if(pos==1)
        {

        }
        else if(pos==countNodes(head))
        {
            struct node *p=head,*q;
            for(int i=1;i<pos;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=head;
            free(p);
        }

    }
    return head;
}
void main()
{
    int n;
    struct node *HEAD=NULL;
    printf("Enter no. of elements in the circular linked list:\n");
    scanf("%d",&n);
    HEAD=createlist(n,HEAD);
    head=HEAD;
    printf("circular Linked list is:\n");
    display(HEAD);
    printf("\n");
    printf("No. of elements in the circular linked list is: %d\n",countNodes(HEAD));
    /*insert(HEAD);
    display(HEAD);
    printf("\n");
    insert(HEAD);
    display(HEAD);
    printf("\n");
    insert(HEAD);
    display(HEAD);*/
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
