//merging two sorted linked list
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
struct node* merge(struct node* head1,struct node *head2)
{
    struct node *head3=NULL,*last=NULL;
    if(head1->data<head2->data)
    {
        head3=head1;
        last=head1;
        head1=head1->next;
        last->next=NULL;
    }
    else
    {
        head3=head2;
        last=head2;
        head2=head2->next;
        last->next=NULL;
    }
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            last->next=head1;
            last=head1;
            head1=head1->next;
            last->next=NULL;
        }
        else
        {
            last->next=head2;
            last=head2;
            head2=head2->next;
            last->next=NULL;
        }
    }
    if(head1!=NULL)
    {
        last->next=head1;
    }
    else
    {
        last->next=head2;
    }
    return head3;
}
void main()
{
    int n1,n2;
    struct node *HEAD1=NULL,*HEAD2=NULL;
    printf("Enter no. of elements in the 1st linked list:(make sure to enter elements in sorted way)\n");
    scanf("%d",&n1);
    HEAD1=createlist(n1,HEAD1);
    printf("Linked list is:\n");
    display(HEAD1);
    printf("\n");
    printf("Enter no. of elements in the 2nd linked list:(make sure to enter elements in sorted way)\n");
    scanf("%d",&n2);
    HEAD2=createlist(n2,HEAD2);
    printf("Linked list is:\n");
    display(HEAD2);
    printf("\n");
    struct node *HEAD=merge(HEAD1,HEAD2);
    printf("After merging the two linked lists:\nLinked list is:\n");
    display(HEAD);
    printf("\n");
}
