#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int hash(int key)
{
    return key%SIZE;
}
int probe(int HT[],int key)
{
    int index=hash(key);
    int i=0;
    while(HT[(index+i)%SIZE]!=0)
    {
        if(HT[(index+i)%SIZE]==-1)
            break;
        i++;
    }
     return (index+i)%SIZE;
}
void insert(int HT[],int key)
{
    HT[probe(HT,key)]=key;
}
void display(int HT[])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%d\n",HT[i]);
    }
}
void search(int HT[],int key)
{
    int index=hash(key);
    if(HT[index]==key)
        printf("%d found at index %d\n",key,index);
    else
    {
        int i=0;
        while(HT[(index+i)%SIZE]!=key)
        {
            if(HT[(index+i)%SIZE]==0)
            {
                printf("Not found\n");
                break;
            }
            i++;
        }
        if(HT[(index+i)%SIZE]==key)
            printf("%d found at index %d",key,(index+i)%SIZE);
    }

}
void deleteKey(int HT[],int key)
{
    int index=hash(key);
    if(HT[index]==key)
        HT[index]=-1;
    else
    {
        int i=0;
        while(HT[(index+i)%SIZE]!=key)
        {
            if(HT[(index+i)%SIZE]==0)
            {
                printf("Not found, Cannot delete\n");
                break;
            }
            i++;
        }
        if(HT[(index+i)%SIZE]==key)
            HT[(index+i)%SIZE]=-1;
    }
}
void main()
{
    int HT[SIZE]={0};
    int ch,key;
    while(1)
    {
        printf("Choices: 1.Insert 2.Search 3.Display 4.Delete 5.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter key to insert:\n");
            scanf("%d",&key);
            insert(HT,key);
            break;
        case 2:
            printf("Enter key to search:");
            scanf("%d",&key);
            search(HT,key);
            break;
        case 3:
            printf("Elements in the hash table: \n");
            display(HT);
            break;
        case 4:
            printf("Enter key to delete:");
            scanf("%d",&key);
            deleteKey(HT,key);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Enter valid choice\n");
        }
    }
}
