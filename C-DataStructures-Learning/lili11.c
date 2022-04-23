//concatenating two linked lists
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
struct node* concat(struct node *HEAD1,struct node *HEAD2)
{
    struct node*p=HEAD1;
    while(p->next!=NULL)
        p=p->next;
    p->next=HEAD2;
    return HEAD1;
}
void main()
{
    int n1,n2;
    struct node *HEAD1=NULL,*HEAD2=NULL;
    printf("Enter no. of elements in the 1st linked list:\n");
    scanf("%d",&n1);
    HEAD1=createlist(n1,HEAD1);
    printf("Linked list is:\n");
    display(HEAD1);
    printf("\n");
    printf("Enter no. of elements in the 2nd linked list:\n");
    scanf("%d",&n2);
    HEAD2=createlist(n2,HEAD2);
    printf("Linked list is:\n");
    display(HEAD2);
    printf("\n");
    struct node *HEAD=concat(HEAD1,HEAD2);
    printf("After concatenating the two linked lists:\nLinked list is:\n");
    display(HEAD);
    printf("\n");
}
