#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
int findMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
        return max;
}
void insert(node *A[],int key)
{
    if(A[key]==NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->next=NULL;
        A[key]=temp;
    }
    else
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->next=NULL;
        node *p=A[key];
        while(p->next!=NULL)
            p=p->next;
        p->next=temp;
    }
}
int delete(node *A[],int i)
{
    if(A[i]!=NULL)
    {
        node *p=A[i];
        int key=p->data;
        A[i]=p->next;
        free(p);
        return key;
    }
}
void bucketSort(int arr[],int n)
{

    int max=findMax(arr,n);
    node *A[max+1];

    for(int i=0;i<max+1;i++)
        A[i]=NULL;
    for(int i=0;i<n;i++)
    {
        insert(A,arr[i]);

    }
    int i=0,j=0;
    while(i<max+1)
    {

        while(A[i]!=NULL)
            arr[j++]=delete(A,i);
        i++;
    }
}
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array to sort:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bucketSort(arr,n);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}
