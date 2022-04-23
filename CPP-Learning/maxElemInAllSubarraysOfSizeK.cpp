#include<bits/stdc++.h>
using namespace std;
void maxEleinWindow(int arr[],int n,int k)
{
    deque<int> q;
    int i;
    for(int i=0;i<k;i++)
    {
        while(!q.empty()&&arr[i]>=arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    //pushing the index of the maxm element of the first window

    for(i=k;i<n;++i)
    {
        //printing the largest element of the previous window
        cout<<arr[q.front()]<<" ";//q.front() always has the index of the largest element of the previous window

        //removing all the index in the dequeue which does not belong to the current window
        while(!q.empty()&&q.front()<=i-k)
            q.pop_front();

        //after that
        //// Remove all elements smaller than the currently
        // being added element (remove useless elements) for the current window
        while(!q.empty()&&arr[i]>=arr[q.back()])
            q.pop_back();

        q.push_back(i);
    }
    //lastly print the max element of the last window
    cout<<arr[q.front()]<<" ";
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
    maxEleinWindow(arr,n,k);


}
