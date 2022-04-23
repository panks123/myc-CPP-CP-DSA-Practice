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
}

