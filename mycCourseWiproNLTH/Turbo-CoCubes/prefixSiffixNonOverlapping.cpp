/* Given a string of character, find the length of longest proper prefix which is also a proper suffix.
Example:
S = abab
lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input:
First line is T number of test cases. 1<=T<=100.
Each test case has one line denoting the string of length less than 100000.

Output: output should be the maximum length of prefix which is also a suffix and both are non-overlapping
e.g.
input:
2
abab
aaaa
Output:
2
2

input:
2
abccab
aaccccaac
Output:
2
3

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,counts=0;
        string s;
        cin>>s;
        int n=s.length();
        if(s.length()%2==0)
        {
            i=(n/2)-1;
        }
        else
        {
            i=n/2;
        }
        j=n-1;

        while(i>=0)
        {
            if(s[i]==s[j])
            {
                counts++;
                //cout<<s[i]<<" "<<s[j]<<endl;
                i--;j--;
            }
            else
            {
                i--;
            }
        }
        cout<<counts<<endl;
    }

    return 0;
}

