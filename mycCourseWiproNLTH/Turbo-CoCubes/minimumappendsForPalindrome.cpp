/*
to find and return the minimum characters required to append at the end of str to make it a palindrome

Assumptions –

The string will only contain lowercase English Alphabets

Note –

If string is already a palindrome then return NULL
You have to find the minimum characters required to append at the end of the string to make it a palindrome
*/

// Solution: The solution can be achieved by removing characters from the beginning of the string one by one and checking if the string is palindrome or not.

#include <bits/stdc++.h>
using namespace std;
int isPalindrome(char *str,int size)
{
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}
int countsOfAppends(char *str,int n)
{
    int size=n;
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        if(isPalindrome(str+i,size))
        {
            break;
        }
        else
        {
            v.push_back(str[i]);
        }
        size--;
    }
    if(v.size()!=0)
    {
        for(int i=v.size()-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;
    }
    return v.size();
}
// Driver code
int main()
{
    char str[100];
    cin>>str;

    int counts=countsOfAppends(str,strlen(str));
    cout<<"No.of appends : "<<counts;
}
