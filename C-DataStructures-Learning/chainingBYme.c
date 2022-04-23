#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void insert(node *HT[])
{
    int key;
    printf("Enter a key to insert:");
    scanf("%d",&key);
    node *temp=(node*)malloc(sizeof(node));
    temp->data=key;
    temp->next=NULL;
    int index=key%10;
    if(HT[index]==NULL)
    {
        HT[index]=temp;
    }
    else
    {
        node *p=HT[index];
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;
    }
}
void display(node *HT[])
{
    for(int i=0;i<10;i++)
    {
        printf("Entries at index %d: ",i);
        if(HT[i]==NULL)
            printf("No entries\n");
        else
        {
            node *p=HT[i];
            while(p!=NULL)
            {
                printf("%d->",p->data);
                p=p->next;
            }
            printf("\n");
        }
    }
}
void search(node *HT[],int key)
{
    int index=key%10;
    node *p=HT[index];
    if(HT[index]==NULL)
        printf("Not found\n");
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
void deleteKey(node *HT[],int key)
{
    int index=key%10;
    node *p=HT[index];

    if(HT[index]==NULL)
    {
        printf("Key is not present\n");
    }
    else if(p->data==key)
    {
        node *r=p;
        HT[index]=p->next;
        free(r);
    }
    else
    {
        struct node *q=p;
        struct node *r;
        while(q->data!=key)
        {
            r=q;
            q=q->next;
        }
        r->next=q->next;
        q->next=NULL;
        free(q);
    }
}
void main()
{
    int ch,key;
    node *HT[10];
    for(int i=0;i<10;i++)
        HT[i]=NULL;
    while(1)
    {

        printf("Choices: 1.Insert 2.Search 3.Delete 4.Display 5.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert(HT);
                break;
            case 2:
                printf("Enter a key to search:");
                scanf("%d",&key);
                search(HT,key);
                break;
            case 3:
                printf("Enter a key to delete:");
                scanf("%d",&key);
                deleteKey(HT,key);
                break;
            case 4:
                display(HT);
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Enter valid choice\n");
        }
    }
}

