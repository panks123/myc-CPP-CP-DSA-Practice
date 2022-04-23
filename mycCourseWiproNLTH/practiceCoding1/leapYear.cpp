#include<iostream>
using namespace std;
int isLeap(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
            return 1;
        else
            return 0;
    }
    else
    {
        if(year%4==0)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int y;
    cout<<"Enter a year:";
    cin>>y;
    if(isLeap(y))
        cout<<y<<" is a leap year";
    else
        cout<<y<<" is not a leap year";
}
