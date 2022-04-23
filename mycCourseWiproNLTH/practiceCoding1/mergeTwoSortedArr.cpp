#include<iostream>
#include<algorithm>
using namespace std;
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int* mergeArrays(int *arr1,int *arr2,int n1,int n2)
{
    int i=0,j=0,k=0;
    int* arr=(int*)malloc((n1+n2)*sizeof(int));
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;k++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;k++;
        }
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;k++;
    }
    return arr;
}
using namespace std;
int main()
{
    int n1;
    cout<<"Enter the size of first array:";
    cin>>n1;
    int *arr1=(int *)malloc(n1*sizeof(int));
    cout<<"Enter the elements of first array:";
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    int n2;
    cout<<"Enter the size of second array:";
    cin>>n2;
    int *arr2=(int *)malloc(n2*sizeof(int));
    cout<<"Enter the elements of second array:";
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    sort(arr1,arr1+n1);
    cout<<"After sorting:"<<endl;
    cout<<"Array1: ";
    display(arr1,n1);
    sort(arr2,arr2+n2);
    cout<<"Array2: ";
    display(arr2,n2);
    int *arr=(int *)malloc((n1+n2)*sizeof(int));
    arr=mergeArrays(arr1,arr2,n1,n2);
    cout<<"After merging the two arrays: \n";
    cout<<"Array: ";
    display(arr,n1+n2);
}
