//Given an array , find all pairs of the array elements whose product is equal to a given no.
//complexity:   O(n)  ---using hashing
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    float arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }

    float product;
    printf("Enter value of product: ");
    cin>>product;
    unordered_map<float,int> m;
    int counts=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(product/arr[i])!=m.end())
        {

            counts+=m[product/arr[i]];
        }
        m[arr[i]]++;
    }
    cout<<counts;

}


