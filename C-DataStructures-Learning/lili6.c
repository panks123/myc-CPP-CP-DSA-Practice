//to check if the linked list is sorted
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
void checkifSorted(struct node *p)
{

    if(p==NULL)
        printf("Linked list is empty\n");
    else
    {
        while(p->next!=NULL)
        {
            if(p->data>p->next->data)
                break;
            p=p->next;
        }
        if(p->next!=NULL)
            printf("Linked list is unsorted\n");
        else
            printf("Linked list is sorted\n");
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
    checkifSorted(HEAD);
}
