/*Printing all the Leaders in an Array
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side.

And the rightmost element is always a leader. For example int the array {16, 19, 4, 3, 8, 3}, leaders are 19, 8 and 3?*/

#include <iostream>

using namespace std;
void printLeaders(int *arr,int n)
{
    int flag;
    for(int i=0;i<n;i++)
    {
        flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Leaders in the array are: ";
    printLeaders(arr,n);

    return 0;
}
