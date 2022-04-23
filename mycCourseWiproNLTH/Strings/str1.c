#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter yr name:");
    gets(str);       //gets space separated string input lene ke kaabil hai but ye ek deprecated
                     // function hai To iska ek scanf wala alternative agle program me hai
    printf("%s",str);
}
