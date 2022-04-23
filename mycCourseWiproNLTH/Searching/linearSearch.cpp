#include<iostream>
using namespace std;
int linearSearch(int *arr,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int i=linearSearch(arr,n,key);
    if(i!=-1)
        cout<<key <<" found at index "<<i<<endl;
    else
        cout<<"Not Found";
}
