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
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
void search(struct node*p,int key)
{
    if(p==NULL)
    {
        printf("NOT Found\n");
        return;
    }
    if(p->data==key)
    {
        printf("Found\n");
        return;
    }
    else
    {
        search(p->next,key);
    }
}
void main()
{
    int n;
    printf("Enter no. of elements in the linked list:\n");
    scanf("%d",&n);
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
    printf("Linked list is:\n");
    display(head);
    printf("Enter a key to search:\n");
    int key;
    scanf("%d",&key);
    search(head,key);
}
