//given an arrray of elements check whether in any way it is possible to make a number from the digits of the elements which will be divisible by 3

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r=0;
    for(int i=0;i<n;i++)
    {
        r=(arr[i]+r)%3;
    }
    cout<<(r==0);//0 or 1 i.e True or False will be printed
    return 0;
}
