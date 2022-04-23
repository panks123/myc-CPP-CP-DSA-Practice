#include<iostream>
using namespace std;
int main()
{
	int arr[]={11,10,5,17,7,5,2,4,1,2,4,1,25,7,6,9,6,9,10,11};
	int x_or =0,counts=0;
	int i;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	

	
	for( i=0;i<n;i++)
	{
		x_or=x_or ^ arr[i];
	}
	//cout<<x_or<<endl;
	
	while(x_or)
	{
	    if(x_or & 1 == 1)
	        break;
        else
            counts++;
        x_or=x_or>>1;
	}
	//cout<<counts<<endl;
	int xor1=0,xor2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] & (1<<counts))
			xor1=xor1 ^ arr[i];
		else
			xor2 = xor2 ^ arr[i];
	}
	cout<<"Two elements are : "<<xor1<<" "<<xor2<<endl;
	
}
/*
Problem: Given an array of elements where each element are present twice except two elements which are present only once,
		 Find those two elements which are present only once
*/
