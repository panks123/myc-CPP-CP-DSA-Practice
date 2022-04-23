//recursive display
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
int sum(struct node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        int sum=0;
        while(p!=NULL)
        {
            sum=sum+p->data;
            p=p->next;
        }
        return sum;
    }
}
int findMax(struct node*p)
{
    if(p==NULL)
        return 0;
    else
    {
        int max=p->data;
        p=p->next;
        while(p!=NULL)
        {
            if(p->data>max)
                max=p->data;
            p=p->next;
        }
        return max;
    }
}
void search(struct node*p,int key)
{
    if(p==NULL)
    {
        printf("Cannot search , empty linked list\n");
    }
    else
    {
        while(p!=NULL)
        {
            if(p->data==key)
                {
                    printf("Found\n");
                    break;
                }
            p=p->next;
        }
        if(p==NULL)
            printf("Not Found\n");
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
    printf("\n No. of nodes in the linked list is:%d\n",countNodes(HEAD));
    printf("Sum of all the elements in the array is:%d\n",sum(HEAD));
    printf("Maximum element in the array is:%d\n",findMax(HEAD));
    printf("Enter a key to search:\n");
    int key;
    scanf("%d",&key);
    search(HEAD,key);

}

