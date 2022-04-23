// Method 2
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int counts=0;
	while(n!=0)
	{
		n=n & (n-1); // It will turn off one set bit each time
		counts++;
	}
	// Here loop runs no. of  times = total no. of set bits
	cout<<"No. of set bits="<<counts<<endl;
}
/*
Problem : Given a no. find the no. of set bits in that no.
*/
