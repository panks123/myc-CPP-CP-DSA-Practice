//creating a linked list by inserting at the end//deleting
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
int countNodes(struct node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        return count;
    }
}
struct node* delete(struct node *p)
{
    int pos;
    printf("Enter the position to delete:");
    scanf("%d",&pos);
    if(pos<1||pos>countNodes(p))
    {
        printf("Invalid position You should input values (1-%d)",countNodes(p));
    }
    else
    {
        if(pos==1)
        {
            struct node *q=p;
            p=p->next;
            q->next=NULL;
            free(q);
        }
        else
        {
            struct node *q=p;
            struct node *r;
            for(int i=1;i<=pos-1;i++)
            {
                r=q;
                q=q->next;
            }
            r->next=q->next;
            q->next=NULL;
            free(q);
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
    head=delete(head);
    printf("\n");
    display(head);
    head=delete(head);
    printf("\n");
    display(head);
    head=delete(head);
    printf("\n");
    display(head);
}
