#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> set;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter "<<n<<" "<<"elements:";
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		set.push_back(x);
	}
	cout<<"Given set: ";
	
	for(int i=0;i<n;i++)
		cout<<set[i]<<" ";
	cout<<endl;
	cout<<"All its subsets: ";
	for(int i=0;i<(1<<n);i++)
	{
		vector<int> subset;
		for(int bit_index=0;bit_index<n;bit_index++)
		{
			if(i & (1<<bit_index))
				subset.push_back(set[bit_index]);
		}
		cout<<"{";
		for(int j=0;j<subset.size();j++)
			cout<<subset[j]<<",";
		cout<<"}  ";
	}
}

/*
Problem : To find all the subsets of a given set
*/
