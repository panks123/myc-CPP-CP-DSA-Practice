#include<stdio.h>
void main()
{
    int totalmarks;
    printf("Enter your total marks:");
    scanf("%d",&totalmarks);
    totalmarks>=300?totalmarks>=400?printf("Distinction"):printf("Passed"):printf("Failed");
}
