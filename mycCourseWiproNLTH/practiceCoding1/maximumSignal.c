//
#include<stdio.h>
int maxSignal(int n,char *str)
{
    if(n<=2)
        return 0;
    int maxLength=0,counts;
    int i=1;
    while(str[i]==str[0])
        i++;
    while(i<n-1)
    {
        counts=1;
        while(str[i]==str[i+1])
        {
            if(i+1==n-1)
            {
                counts=0;
                i++;
                break;
            }
            else
                counts++;
            i++;
        }
        if(counts>maxLength)
            maxLength=counts;
        i++;
    }
    return maxLength;
}
void main()
{
    int n;
    char str[100],newline;
    //printf("Enter length of signal:");
    scanf("%d",&n);
    scanf("%c",&newline);  //It will eat the newline and then  So if we have to take a string input after a integer input we must write this line otherwise it will not take the string input
    //printf("Signal daal:");
    scanf("%[^\n]s",str);  //This scanf will read the string otherwise not
    printf("%d",maxSignal(n,str));
}

/*
A digital machine generates binary data which consists of a string of 0s and 1s. A maximum signal M, in the data, consists of the maximum number of either 1s or 0s appearing consecutively in the data but M can’t be at the beginning or end of the string. Design a way to find the length of the maximum signal.



Input

 The first line of the input consists of an integer N, representing the length of the binary string. The second line consists of a string of length N consisting of 0s and 1s only.

Output

 Print an integer representing the length of the maximum signal.



Example

Example 1:

Input

6
101000

Output

 1

Explanation

 For 101000, M can be 0 at the second index or at the third index so in both cases max length = 1.



Example2:

Input

9
101111110

Output

 6

Explanation

 For 101111110, M = 111111 so maxlength = 6.



5
10110
*/
