//The solutions should be written, for compiler compatibility : gcc-4.3.2

#include<stdio.h>
#include <math.h>

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
double count_heads(int N, int R)
{
    double output;
	//write your code here
    output=(double)(nCr(N,R)*(pow(.5,R))*pow(.5,(N-R)));
	return output;
}
int main()
{
	int N, R;
	scanf("%d",&N);
	scanf("%d",&R);
	printf("%lf",count_heads(N,R));
    return 0;

}
