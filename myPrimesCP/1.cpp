#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int counts=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			counts++;
	}
	if(counts==2)
		cout<<"Prime"<<endl;
	else
		cout<<"Not prime"<<endl;
}
/*
Problem: Given n, check whether it is prime or not 
*/

/*
Time complexity: O(n)
*/
