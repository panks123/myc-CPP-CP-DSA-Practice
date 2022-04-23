#include<iostream>
#define ll long long
ll x=0;
using namespace std;
void add(ll n)
{
	ll z=1;
	x=x | (z<<n);
}
void remove(int n)
{
	ll z=1;
	x=x & (~(z<<n));
}
int main()
{
	
	ll q,i;
	cout<<"Enter no. of queries: ";
	cin>>q;
	while(q--)
	{
		int ch;
		cout<<"Enter your query:"<<endl<<" Options: 1-> add() 2->remove() any other no.-> return"<<endl;
		cin>>ch;
		switch(ch)
		{
			ll n;
			case 1:
				cout<<"Enter no. (0-60) to add: ";
				cin>>n;
				add(n);
				break;
			case 2:
				cout<<"Enter no. (0-60) to remove :";
				cin>>n;
				remove(n);
				break;
			default:
				cout<<"Wrong query. Enter your query again:";
				q++;
				break;
		}
	}
	cout<<"Set is: {";
	for(i=0;i<=60;i++)
	{
		ll z=1;
		if(x &(z<<i))
			cout<<i<<",";
	}
	cout<<"}"<<endl;
}
/*
Problem: Design a data structure(Set) so that the elements in it are unique and  which has two functions:

1. add(n) 
2. remove(n)
where , 0<=n<=60
 such that these two operations requires O(1) time complexity and O(1) space complexity
*/
