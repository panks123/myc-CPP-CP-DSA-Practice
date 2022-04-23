#include<bits/stdc++.h>
using namespace std;
void firstNegativeInWindow((int arr[],int n,int k)
{
    queue<int> q;
    int i;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push(arr[i]);
        }
    }

    //pushing the index of the maxm element of the first window

    for(i=k;i<n;++i)
    {
        if(q.empty())
            cout<<0<<" ";
        else
            cout<<q.top()<<" ";

        //removing all the index in the dequeue which does not belong to the current window
        while(!q.empty()&&q.front()<=i-k)
            q.pop();

        //after that
        //// Remove all elements smaller than the currently
        // being added element (remove useless elements) for the current window
        if(arr[i]<0)
            q.push(arr[i]);
    }
    //lastly print the max element of the last window
    if(q.empty())
        cout<<0<<" ";
    else
        cout<<q.top()<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter no. of elements in the array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter window size:";
    cin>>k;
    firstNegativeInWindow(arr,n,k);


}
