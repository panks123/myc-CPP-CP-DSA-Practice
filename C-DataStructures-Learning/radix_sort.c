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
void insert(node *A[],int key,int exp)
{
    if(A[(key/exp)%10]==NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->next=NULL;
        A[(key/exp)%10]=temp;
    }
    else
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=key;
        temp->next=NULL;
        node *p=A[(key/exp)%10];
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
void radixSort(int arr[],int n)
{
    int max=findMax(arr,n);
    node *A[10];
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        for(int i=0;i<10;i++)
            A[i]=NULL;
        for(int i=0;i<n;i++)
        {
            insert(A,arr[i],exp);
        }
        int i=0,j=0;
        while(i<10)
        {
            while(A[i]!=NULL)
                arr[j++]=delete(A,i);
            i++;
        }
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
    radixSort(arr,n);
    printf("Sorted array:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
