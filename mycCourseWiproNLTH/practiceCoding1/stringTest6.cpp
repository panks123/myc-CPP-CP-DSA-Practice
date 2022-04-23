#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;// It works fine
    cout<<s1<<" "<<s2;

    string arr[5];
    cout<<"\nEnter five apace separated strings:";
    for(int i=0;i<5;i++)
        cin>>arr[i]; // it works fine

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}
