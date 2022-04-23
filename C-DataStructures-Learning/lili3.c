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
int countNodes(struct node*p)
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
struct node* insert(struct node *head)
{
   int pos;
   printf("Enter position to insert(0,1,2,3,....)\n");
   scanf("%d",&pos);
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter value to insert:\n");
   scanf("%d",&temp->data);
   temp->next=NULL;
   if(pos<0||pos>countNodes(head))
   {
       printf("Invalid position\n");
       return head;
   }
   else if(pos==0)
   {
       temp->next=head;
       head=temp;
       return head;
   }
   else
   {
       struct node*p=head;
       for(int i=1;i<=pos-1;i++)
       {
           p=p->next;
       }
       temp->next=p->next;
       p->next=temp;
       return head;
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
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
    HEAD=insert(HEAD);
    display(HEAD);
    printf("\n");
}
