#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    if(q->front==q->rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        q->front=(q->front+1)%q->size;
        return q->Q[q->front];
    }
}
void display(struct Queue q)
{
    int i=q.front+1;
    do
    {
        printf("%d  ",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    printf("\n");
}
void main()
{
    int ele;
    struct Queue q;
    printf("Enter size of queue:");
    scanf("%d",&q.size);
    q.Q=(int*)malloc(q.size*sizeof(int));
    q.front=0;
    q.rear=0;
    while(1)
    {
        printf("Options: 1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        int ch;
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter an element to enqueue:");
            scanf("%d",&ele);
            enqueue(&q,ele);
            break;
        case 2:
            ele=dequeue(&q);
            printf("Element dequeued: %d\n",ele);
            break;
        case 3:
            printf("Queue is:\n");
            display(q);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
