//to remove duplicates
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
struct node* removeDuplicates(struct node* head)
{
    if(head!=NULL)
    {
        struct node *p=head,*q;
        q=p->next;
        while(q!=NULL)
        {
            if(p->data!=q->data)
            {
                p=q;
                q=q->next;
            }
            else
            {
                p->next=q->next;
                q->next=NULL;
                free(q);
                q=p->next;
            }
        }
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
    HEAD=removeDuplicates(HEAD);
    printf("After removing the duplicates\n");
    printf("Linked list is:\n");
    display(HEAD);
    printf("\n");
}
