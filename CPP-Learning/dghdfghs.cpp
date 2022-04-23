#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    string s;
    cout<<"Enter date:";
    cin>>s;
    string s1="";
    s1=s1+s[3];
    s1=s1+s[4];
    int i=stoi(s1);
    cout<<arr[i-1];
}
