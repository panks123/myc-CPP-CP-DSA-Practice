#include<iostream>
using namespace std;
void separateEvenOdd(int *arr,int n)
{
    int i=0,j=1;
    while(j<n)
    {
        if(arr[i]%2==0&&arr[j]%2==0)
        {
            if(i==j)
                j++;
            else
            {
                i++;j++;
            }
        }
        else if(arr[i]%2==0&&arr[j]%2==1)
        {
            i++;
        }
        else if(arr[i]%2==1&&arr[j]%2==1)
        {
            j++;
        }
        else
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements:";
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    separateEvenOdd(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
