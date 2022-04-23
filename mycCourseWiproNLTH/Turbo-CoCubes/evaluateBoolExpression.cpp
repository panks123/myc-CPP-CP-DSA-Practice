/*
Given a string consisting of only 0, 1, A, B, C where
A = AND
B = OR
C = XOR
Calculate the value of the string assuming no order of precedence and evaluation is done from left to right.

Constraints – The length of string will be odd. It will always be a valid string.
Example, 1AA0 will not be given as an input.

Examples:

Input : 1A0B1
Output : 1
1 AND 0 OR 1 = 1

Input : 1C1B1B0A0
Output : 0
*/

#include <bits/stdc++.h>
using namespace std;

int evaluateBoolExpr(string s)
{
    int n = s.length();

    // Traverse all operands by jumping
    // a character after every iteration.
    for (int i = 0; i < n; i += 2)
    {
        if (s[i + 1] =='A')
        {
            if (s[i + 2] =='0'|| s[i] =='0')
                s[i + 2] ='0';
            else
                s[i + 2] ='1';
        }

        // If operator next to current operand
        // is OR.
        else if (s[i + 1] =='B')
        {
            if (s[i + 2] =='1'|| s[i] =='1')
                s[i + 2] ='1';
            else
                s[i + 2] ='0';
        }

        // If operator next to current operand
        // is XOR (Assuming a valid input)
        else if(s[i+1]=='C')
        {
            if (s[i + 2] == s[i])
                s[i + 2] ='0';
            else
                s[i + 2] ='1';
        }
    }
    return s[n-1] -'0';
}

// Driver code
int main()
{
    string s;
    cin>>s;
    // e.g. "1C1B1B0A0"
    cout << evaluateBoolExpr(s);
    return 0;
}
