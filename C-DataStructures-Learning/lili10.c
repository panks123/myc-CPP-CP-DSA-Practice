//reversing a linked list by reversing the links
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
    if(p!=NULL)
    {
        printf("%d  ",p->data);
        display(p->next);
    }
}
struct node* createlist(int n,struct node *head)
{
    printf("Enter %d elements to create a linked list:\n",n);
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
    }
    return head;
}
void reverse(struct node *q,struct node *p)
{
    if(p!=NULL)
    {
        reverse(p,p->next);
        p->next=q;
    }
    else
    {
        head=q;
    }
}
void main()
{
    int n;
    struct node *HEAD=NULL;
    printf("Enter no. of elements in the linked list:\n");
    scanf("%d",&n);
    HEAD=createlist(n,HEAD);
    printf("Linked list is:\n");
    display(HEAD);
    printf("\n");
    reverse(NULL,HEAD);
    printf("After reversing\n");
    printf("Linked list is:\n");
    display(head);
    printf("\n");
}
