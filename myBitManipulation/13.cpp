#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter i:";
	cin>>i;
	bool ith_bit=(n>>i)%2;
	cout<<"bit at pos "<<i<<" = "<<ith_bit<<endl;
}
/*
Problem: Given a number and i,extract the ith bit of the number
*/
