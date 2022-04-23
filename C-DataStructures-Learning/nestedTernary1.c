#include<stdio.h>
void main()
{
    int totalmarks;
    printf("Enter your total marks:");
    scanf("%d",&totalmarks);
    totalmarks>=400?printf("Distinction"):totalmarks>=300?printf("Passed"):printf("Failed");
}
