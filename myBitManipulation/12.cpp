#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter i:";
	cin>>i;
	int mask=1<<i;
	if((n & mask)==mask)
		cout<<"Set"<<endl;
	else
		cout<<"Not set"<<endl;
}
/*
Problem: Given a number and i, find if the ith bit(from right to left) in the number is set or not
*/
