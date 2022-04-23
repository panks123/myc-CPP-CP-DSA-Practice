#include<stdio.h>
#include<stdlib.h>
void main(int argc,char* argv[])
{
    if(argc>2)
    {
        int product=1;
        for(int i=1;i<argc;i++)
        {
            product=product*atoi(argv[i]);
        }
        printf("Product is: %d",product);
    }
}
