#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int flag=0;
struct Array
{
    int arr[SIZE];
    int length;
    int size;
};
void display(struct Array *a)
{
    for(int i=0;i<a->length;i++)
        printf("%d  ",a->arr[i]);
    printf("\n");
}
void append(struct Array *a)
{
    int ele;
    printf("Enter an element to append\n");
    scanf("%d",&ele);
    a->length++;
    a->arr[a->length-1]=ele;
}
void insert(struct Array *a)
{
    int index,ele;
    printf("Enter index position to insert:\n");
    scanf("%d",&index);
    if(index<0||index>a->length-1)
        printf("Invalid index!! Try again...\n");
    else
    {
        printf("Enter element to insert:\n");
        scanf("%d",&ele);
        for(int i=a->length-1;i>=index;i--)
            a->arr[i+1]=a->arr[i];
        a->arr[index]=ele;
        a->length++;
    }
}
void del(struct Array *a)
{
    int index;
    printf("Enter index position to delete:\n");
    scanf("%d",&index);
    if(index<0||index>a->length-1)
        printf("Invalid index!! Try again...\n");
    else
    {
        for(int i=index+1;i<a->length;i++)
            a->arr[i-1]=a->arr[i];
        a->length--;
    }
}
void linearSearch(struct Array *a)
{
    if(a->length!=0)
    {
        int key,i;
        printf("Enter key to search:\n");
        scanf("%d",&key);
        for(i=0;i<a->length;i++)
        {
            if(a->arr[i]==key)
            {
                printf("%d found at index %d\n",key,i);
                return;
            }
        }
        if(i>=a->length)
            printf("Not Found!!!\n");
    }
}
void bubbleSort(struct Array *a)
{
    if(a->length>0)
    {
        for(int i=0;i<a->length;i++)
        {
            for(int j=0;j<a->length-i-1;j++)
            {
                if(a->arr[j]>a->arr[j+1])
                {
                    int temp=a->arr[j];
                    a->arr[j]=a->arr[j+1];
                    a->arr[j+1]=temp;
                }
            }
        }
    }
}
void binarySearch(struct Array *a,int l,int r,int key)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(a->arr[mid]==key)
            printf("%d found at index %d\n",key,mid);
        else if(key<a->arr[mid])
            binarySearch(a,l,mid-1,key);
        else
            binarySearch(a,mid+1,r,key);
    }
    else
    {
        printf("Not Found!!!\n\n");
    }
}
void max(struct Array *a)
{
    if(a->length!=0)
    {
        int max=a->arr[0];
        for(int i=1;i<a->length;i++)
        {
            if(a->arr[i]>max)
                max=a->arr[i];
        }
        printf("Maximum element in the array is: %d\n",max);
    }
    else
        printf("Sorry!!! Array is empty\n");
}
void min(struct Array *a)
{
    if(a->length!=0)
    {
        int min=a->arr[0];
        for(int i=1;i<a->length;i++)
        {
            if(a->arr[i]<min)
                min=a->arr[i];
        }
        printf("Maximum element in the array is: %d\n",min);
    }
    else
        printf("Sorry!!! Array is empty\n");
}
int sum(struct Array *a,int n)
{
    if(n<0)
       return 0;
    else
       return a->arr[n]+sum(a,n-1);
}
void avg(struct Array *a,int n)
{
    printf("Average of all the elements of the array is: %.3f\n\n",((float)sum(a,n)/(n+1)));
}
void reverse(struct Array *a)
{
    if(a->length>0)
    {
        for(int i=0,j=a->length-1;i<j;i++,j--)
        {
            int temp=a->arr[i];
            a->arr[i]=a->arr[j];
            a->arr[j]=temp;
        }
    }
}
void main()
{
    struct Array arr;
    struct Array *a=&arr;
    int len,ch,ch1;
    a->size=SIZE;
    printf("Note: Maximum array size is 10\n\nEnter length of array(length should be less than size i.e. 10)\n");
    scanf("%d",&len);
    a->length=len;
    printf("Enter %d elements:\n",a->length);
    for(int i=0;i<a->length;i++)
        scanf("%d",&a->arr[i]);
    printf("Array created\n\n");
    while(1)
    {
        printf("Enter your choice:(Choices: 1.Display 2.Append 3.Insert 4. Delete 5.Search 6.Sort 7.Maximum 8.Minimum 9.Sum 10.Average 11.Reverse 12.Exit)\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            display(a);
            break;
        case 2:
            if(a->length<a->size)
            {
                append(a);
                flag=0;
            }
            else
                printf("Sorry,cannot proceed as array is FULL\nEnter some other choice\n");
        case 3:
            if(a->length<a->size)
            {
                insert(a);
                flag=0;
            }
            else
                printf("Sorry,cannot proceed as array is FULL\nEnter some other choice\n");
            break;
        case 4:
            del(a);
            break;
        case 5:

            printf("Choose your choice (Choices: 1.Linear Search 2.Binary Search(for this choice first sort the array))\n");
            scanf("%d",&ch1);
            switch(ch1)
            {
            case 1:
                linearSearch(a);
                break;
            case 2:
                if(flag==1)
                {
                    int l=0,r=a->length-1,key;
                    printf("Enter key to search\n");
                    scanf("%d",&key);
                    binarySearch(a,l,r,key);
                }
                else
                {
                    printf("Array is not sorted ,First Sort it\n\n");
                }
                break;
            default:
                printf("Invalid input!!!\n");
                break;
            }
            break;
        case 6:
            bubbleSort(a);
            flag=1;
            break;
        case 7:
            max(a);
            break;
        case 8:
            min(a);
            break;
        case 9:
            if(a->length>0)
            {
                int s=sum(a,a->length-1);
                printf("Sum of all the elements of the array is: %d\n\n",s);
            }
            else
                printf("Sorry!!! Array is empty...\n");
            break;
        case 10:
            if(a->length>0)
                avg(a,a->length-1);
            else
                printf("Sorry!!! Array is empty...\n");
            break;
        case 12:
            exit(1);
            break;
        case 11:
            reverse(a);
            break;
        default:
            printf("Invalid input!!!\n");
            break;
        }
    }
}
