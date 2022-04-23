//reversing a double-linked list
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
struct node* reverse(struct node* Head)
{

    if(Head==NULL)
    {
        printf("Empty list...\n");
        return Head;
    }
    else
    {
        struct node *p=Head;
        struct node *temp;
        while(p!=NULL)
        {
            temp=p->next;
            p->next=p->prev;
            p->prev=temp;
            p=p->prev;
            if(p->next==NULL)
                Head=p;
            printf("%d\n",Head->data);
        }
        return Head;
    }
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
    HEAD=reverse(HEAD);
    display(HEAD);
    printf("\n");

}
