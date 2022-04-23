#include<iostream>
using namespace std;
void secondThirdHighest(int arr[],int n)
{
    int highest,secondHighest=-1,thirdHighest=-1;
    highest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>highest)
        {
            thirdHighest=secondHighest;
            secondHighest=highest;
            highest=arr[i];
        }
        else if(arr[i]>secondHighest)
        {
            thirdHighest=secondHighest;
            secondHighest=arr[i];
        }
        else if(arr[i]>thirdHighest)
        {
            thirdHighest=arr[i];
        }
    }
    cout<<"Highest: "<<highest<<endl<<"Second Highest: "<<secondHighest<<endl<<"Third Highest: "<<thirdHighest;
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
    secondThirdHighest(arr,n);
}
