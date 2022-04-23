/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	cin>>q;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int inp;
	int x,l,r;
	for(int i=0;i<q;i++)
	{
		cin>>inp;
		if(inp==1)
		{
			cin>>x;

			if(arr[x]==0)
            {
                arr[x]=1;
                cout<<"xxx"<<x<<"xxx"<<endl;
            }
			else
            {
                arr[x]=0;
                cout<<"xxx"<<x<<"xxx"<<endl;
            }
		}
		if(inp==0)
		{
			cin>>l;
			cin>>r;
			for(int k:arr)
                cout<<k<<" jjj";

			if(arr[r]==1)
			   cout<<"ODD"<<endl;
			if(arr[r]==0)
			   cout<<"EVEN"<<endl;
		}
	}
	return 0;
}
