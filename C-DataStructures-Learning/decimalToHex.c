#include<stdio.h>
int main()
{
    int n;

    printf("Enter a no. to convert:");
    scanf("%d",&n);
    int no=n;
    char arr[100];
    int i=0;
    while(n!=0)
    {
        int r=0;
        r=n%16;
        if(r<10)
        {
            arr[i]=r+48;
            i++;
        }
        else
        {
            arr[i]=r+55;
            i++;
        }
        n=n/16;
    }
    printf("Hexadecimal equivalent of  is :");
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",arr[j]);
    }

}

