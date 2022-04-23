#include<bits/stdc++.h>
using namespace std;
void firstNegativeInWindow(int arr[],int n,int k)
{
    queue<int> q;
    int i;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push(i);
        }
    }

    for(i=k;i<n;++i)
    {
        if(q.empty())
            cout<<0<<" ";
        else
            cout<<arr[q.front()]<<" ";

        while(!q.empty()&&q.front()<=i-k)
            q.pop();

        if(arr[i]<0)
            q.push(i);
    }
    if(q.empty())
        cout<<0<<" ";
    else
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
    firstNegativeInWindow(arr,n,k);
	return 0;
}
