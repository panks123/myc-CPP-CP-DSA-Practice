// Method 1
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
		if(n & 1==1)
			counts++;
		n=n>>1;
	}
	// Here loop runs no. of bit times
	cout<<"No. of set bits="<<counts<<endl;
}
/*
Problem : Given a no. find the no. of set bits in that no.
*/
