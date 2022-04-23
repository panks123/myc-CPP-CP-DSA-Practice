#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *front=NULL;
node *rear=NULL;
void enqueue(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
        printf("Queue is full\n");
    else
    {
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
        {
            rear=temp;
            front=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}

int dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        node *p=front;
        int x=p->data;
        front=front->next;
        free(p);
        return x;
    }
}
void display()
{
    node *t=front;
    while(t!=NULL)
    {
        printf("%d  ",t->data);
        t=t->next;
    }
    printf("\n");
}
void main()
{
    int ch,ele;
    while(1)
    {
        printf("Options: 1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter an element:");
            scanf("%d",&ele);
            enqueue(ele);
            break;
        case 2:
            ele=dequeue();
            printf("Element dequeued: %d\n",ele);
            break;
        case 3:
            printf("Queue is: ");
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
