//reversing a linked list by reversing the links
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
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
struct node* reverse(struct node *head)
{
   if(head!=NULL)
   {
       struct node *p=head;
       struct node *q=NULL;
       struct node *r=NULL;
       while(p!=NULL)
       {
           r=q;
           q=p;
           p=p->next;
           q->next=r;
       }
       head=q;
   }
   return head;
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
    HEAD=reverse(HEAD);
    printf("After reversing\n");
    printf("Linked list is:\n");
    display(HEAD);
    printf("\n");
}

