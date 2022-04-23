#include<iostream>
using namespace std;
void display(int n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
 	printf("=%d\n",n);
}
int main()
{
	int n,i,mask;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter i:";
	cin>>i;
	
	cout<<"Given n="<<n<<"= "; display(n);
	cout<<endl;
	
	mask=1<<i;
	n= n | mask;
	cout<<"Result="<<n<<"= "; display(n);
	cout<<endl;
}

/*
Problem : Given a number n,set(make 1) its ith bit whether it is already set or not  (where 0<=i<=31)
*/
