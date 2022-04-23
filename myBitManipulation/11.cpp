#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	if(n & 1==1)
		cout<<"Odd"<<endl;
	else
		cout<<"Even"<<endl;
}
/*
Problem: To find whwther a number is even or odd using bitwise operation
*/
