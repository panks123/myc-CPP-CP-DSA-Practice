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
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Given no. = "<<n<<" ="; display(n);
	int result=n & (n-1);
	cout<<"Result = "<<result<<"= "; display(result);
	cout<<endl;
}
/*
Problem: Given a number n, unset(make 0) the first(right to left) set bit

e.g. if n= 6 (0110)
  result should be = 0100 = 4

*/
