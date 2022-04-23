#include<iostream>
using namespace std;
int minPrice(int n,int m1,int p1,int m2,int p2)
{
    float c1=(float)p1/m1;
    float c2=(float)p2/m2;
    int totalCost=0;
    int applesConsumed=0;

    if(c1<c2)
    {
        int k=n/m1;
        applesConsumed=applesConsumed+m1*k;
        totalCost=totalCost+p1*k;
        if(applesConsumed!=n)
        {
            applesConsumed=applesConsumed-m1+m2;
            totalCost=totalCost-p1+p2;
        }
    }
    else
    {
        int k=n/m2;
        applesConsumed=m2*k;
        totalCost=totalCost+p2*k;
        if(applesConsumed!=n)
        {
            applesConsumed=applesConsumed-m2+m1;
            totalCost=totalCost-p2+p1;
        }
    }
    if(applesConsumed==n)
        return totalCost;
    return -1;
}
int main()
{
    int n;
    int m1,p1,m2,p2;
    cin>>n>>m1>>p1>>m2>>p2;
    cout<<minPrice(n,m1,p1,m2,p2);
}
/*
The first line of the input consists of an integer – N, representing the total number of apples that Josh wants to buy.

The second line consists of two space-separated positive integers – M1 and P1, representing the number of apples in a lot and the lot’s price at shop A, respectively.

The third line consists of two space-separated positive integers-M2 and P2, representing the number of apples in a lot’s price at shop B, respectively.



Output Format:

Print a positive integer representing the minimum price at which Josh can buy the apples.



Sample Input:

19
3 10
4 15



Sample Output:

65
*/
