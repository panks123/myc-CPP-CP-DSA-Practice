// Program to print pythogorian triplets within 1-n
#include<iostream>
using namespace std;
void printPythogorianTriplets(int limit)
{
    int m=2;
    int a,b,c=0;
    while(c<limit)
    {
        for(int n=1;n<m;n++)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limit)
                break;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        m++;
    }
}
int main()
{
    int l;
    cout<<"Enter the limits: ";
    cin>>l;
    cout<<"Pythogorian triplets between 1-"<<l<<": "<<endl;
    printPythogorianTriplets(l);
}
