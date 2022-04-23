#include<iostream>
using namespace std;
void greatestAndSmallest(int arr[],int n)
{
   int greatest,smallest;
   greatest=arr[0];
   smallest=arr[0];
   for(int i=1;i<n;i++)
   {
       if(arr[i]>greatest)
            greatest=arr[i];
       if(arr[i]<smallest)
            smallest=arr[i];
   }
   cout<<"Greatest element: "<<greatest<<endl<<"Smallest element:"<<smallest;
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    greatestAndSmallest(arr,n);
}
