/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int arr[n+1];
    for(long i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int arr1[n+1];
    int lno=0,rno=0;
    int larr[n+1],rarr[n+1];
    for(long i=1;i<=n;i++)
    {
        if(i>1)
        {
            int s=0;
            for(long j=i-1,k=0;j>=1;j--,k++)
            {
                s=s+arr[j]*pow(10,k);
            }
            lno=s;

        }
        larr[i]=lno;
        if(i<n)
        {
            int s=0;
            for(long j=n,k=0;j>=i+1;j--,k++)
            {
                s=s+arr[j]*pow(10,k);
            }
            rno=s;
        }
        rarr[i]=rno;
    }
    for(int i=1;i<n+1;i++)
    {
        cout<<"->"<<larr[i]<<" "<<rarr[i]<<endl;
    }

    /*long q;
    cin>>q;

    while(q--)
    {
        long l,r;
        cin>>l;
        cin>>r;
    }*/
}
