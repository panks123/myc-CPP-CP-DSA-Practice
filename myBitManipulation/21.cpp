#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int flag=0;
	for(int i=0;i<(1<<n);i++)
	{
		int sum=0;
		for(int bit_index=0;bit_index<n;bit_index++)
		{
			if(i & (1<<bit_index))
				sum=sum+v[bit_index];
			else
				sum=sum-v[bit_index];
		}
		if(sum % 360 ==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
/*
Problem: B. Petr and a Combination Lock
 Refr. : https://codeforces.com/problemset/problem/1097/B


Input
The first line contains one integer n (1=n=15) — the number of rotations.

Each of the following n lines contains one integer ai (1=ai=180) — the angle of the i-th rotation in degrees.

Output
If it is possible to do all the rotations so that the pointer will point at zero after all of them are performed, print a single word "YES". 
Otherwise, print "NO". Petr will probably buy a new car in this case.
*/
