/*
Given X and Y coordinates of N points on a Cartesian points. The task is to find the number of possible triangles with the non-zero area
that can be formed by joining each point to every other point.
*/
#include <iostream>
#include<math.h>
using namespace std;
typedef struct point
{
    int x,y;
}point;
int determinant(int x1, int y1, int x2,int y2,int x3,int y3)
{
    return x1*(y2 - y3) - y1*(x2 - x3) + 1*(x2*y3 - y2*x3);
}
int noOfTriangles(point arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(determinant(arr[i].x,arr[i].y,arr[j].x,arr[j].y,arr[k].x,arr[k].y))
                {
                    result++;
                }
            }
        }
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter no. of points :";
    cin>>n;
    point * arr=(point *)malloc(n*sizeof(point));
    cout<<"Enter co-ordinates of "<<n<<" points :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y;
    }
    cout<<"No. of triangles= "<<noOfTriangles(arr,n);
    return 0;
}

