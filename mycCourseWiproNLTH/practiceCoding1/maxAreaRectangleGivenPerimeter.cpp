//given the perimeter of rectangle find the maximum possible area of the rectangle condition: length and breadth are integral
#include<iostream>
using namespace std;
int main()
{
    int perimeter;
    cout<<"Enter perimeter :";
    cin>>perimeter;
    int LplusB=perimeter/2;
    int maxArea;
    if(LplusB%2==0)
        maxArea=(LplusB/2)*(LplusB/2);
    else
        maxArea=(LplusB/2)*(LplusB/2+1);
    cout<<"Maximum possible area of rectangle:"<<maxArea;
}
