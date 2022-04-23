#include<iostream>
using namespace std;
int secondLastOccurrence(int arr[],int n,int ele)
{
    int i=0,first=-1,second=-1;
    while(i<n)
    {
        if(arr[i]==ele)
        {
            second=first;
            first=i;
        }
        i++;
    }
    return second;
}
int main()
{
    int n,ele;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to check its second last occurrence:";
    cin>>ele;
    cout<<"Second Last occurrence of "<<ele<<" is at: "<<secondLastOccurrence(arr,n,ele);
}
