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
	int n;
	cout<<"Enter n:";
	cin>>n;
	
	cout<<"Result="<<xorUptoN(n)<<endl;
	
}
/*
Problem: Given an integer N , find 0 ^ 1 ^ 2 ^ ...... ^ N 
*/
