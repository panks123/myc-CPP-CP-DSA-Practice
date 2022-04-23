#include<stdio.h>
#include<limits.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
//
int partition_descending (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] > pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort_descending(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition_descending(arr, low, high);
        quickSort_descending(arr, low, pi - 1);
        quickSort_descending(arr, pi + 1, high);
    }
}
void main()
{
    int n,p,f;
    //printf("Enter values of n,p,f:\n");
    scanf("%d %d %d",&n,&p,&f);
    int morning[n];
    int evening[n];
    //printf("Enter %d elements for morning[]:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&morning[i]);
    }
    //printf("Enter %d elements for evening[]:\n",n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&evening[j]);
    }
    quickSort(morning,0,n-1);
    //printf("Sorted morning[] is:\n\n");
    /*for (int i=0;i<n;i++)
        printf("%d  ",morning[i]);*/
    quickSort_descending(evening,0,n-1);
    //printf("\n");
    //printf("Sorted evening[] is:\n\n");
    /*for (int i=0;i<n;i++)
        printf("%d  ",evening[i]);*/
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=morning[i]+evening[i];
    }
    //printf("\n");
    //printf("temp[] is:\n\n");
    /*for (int i=0;i<n;i++)
        printf("%d  ",temp[i]);*/
    //printf("\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(temp[i]>p)
        {
            sum=sum+((temp[i]-p)*f);
        }
    }
    printf("%d",sum);
}
