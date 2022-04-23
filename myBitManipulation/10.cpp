#include<iostream>
using namespace std;
int xorUptoN(int n)
{
	if(n%4==0)
		return n;
	else if(n % 4==1)
		return 1;
	else if(n%4==2)
		return n+1;
	else
		return 0; 
}
int main()
{
	int n1,n2;
	cout<<"Enter n1 and n2 for range:";
	cin>>n1>>n2;
	int r1=xorUptoN(n2);
	int r2=xorUptoN(n1-1);
	int result=r1 ^ r2;
	cout<<"Result="<<result<<endl;
	
}
/*
Problem: Given an range n1-n2  , find n1 ^ n1 + 1 ^ n1 + 2 ^ ...... ^ n2 
*/
