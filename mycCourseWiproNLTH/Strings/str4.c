#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter tumhara wala string:");
    scanf("%[^\n]s",str);
    printf("Tumhare wale string ka length hai : %d",strlen(str)); // Aur ha strlen() function use kr rhe ho to <string.h> header file include krna mat bhulna
}                                                                //aur agar c++ me strlen use kar rhe ho to ya to string.h ya phir bits/stdc++.h header file use kar sakte ho
