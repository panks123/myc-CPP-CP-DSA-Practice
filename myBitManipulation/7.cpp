#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,2,4,3,6,2,11,4,6,5,5,11,6,6,10,3,5,5,10,10,10,10,11};
	int n=sizeof(arr)/sizeof(int);
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		res=res ^ arr[i];
	}
	cout<<"Result= "<<res;
}
/* Problem: Given an array of odd number of elemnts containg every element repeated even number of times except 
	one element which is odd number of times . Find which one is repeated odd number of times
*/
