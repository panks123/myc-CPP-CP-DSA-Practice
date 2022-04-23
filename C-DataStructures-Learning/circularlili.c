//Inserting and deleting at the beginning of the circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head=NULL;
void display(struct node *head)
{
    struct node*p=head;
    do
    {
        printf("%d  ",p->data);
        p=p->next;
    }while(p!=head);
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
struct node* inserAtFirst(struct node* Head)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element to insert:");
    scanf("%d",&temp->data);
    temp->next=NULL;
   if(Head==NULL)
   {
       Head=temp;
       temp->next=Head;
   }
   else
   {
       struct node *p=Head;
       while(p->next!=Head)
        p=p->next;
       temp->next=Head;
       Head=temp;
       p->next=Head;
       printf("\n%d",Head->data);
   }
   return Head;
}
struct node* deleteAtFirst(struct node* Head)
{
    if(Head==NULL)
    {
        printf("Empty list, cannot delete...\n");
    }
    else
    {
       struct node *p=Head;
       while(p->next!=Head)
          p=p->next;
      struct node *q=Head;
      Head=Head->next;
      q->next=NULL;
      free(q);
      p->next=Head;
    }
    return Head;
}
void main()
{
    int n;
    struct node *HEAD=NULL;
    printf("Enter no. of elements in the circular linked list:\n");
    scanf("%d",&n);
    HEAD=createlist(n,HEAD);
    printf("circular Linked list is:\n");
    display(HEAD);
    printf("\n");
    HEAD=inserAtFirst(HEAD);
    printf("\n");
    display(HEAD);
    printf("\n");
    HEAD=deleteAtFirst(HEAD);
    printf("After deleting the first element\nLinked list is:\n");
    display(HEAD);

}
