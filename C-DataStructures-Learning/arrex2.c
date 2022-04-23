#include<stdio.h>
struct test
{
    int arr[5];
    int n;
};
void fun(struct test t)//call by value
{
    t.arr[1]=5;
    for(int i=0;i<t.n;i++)
    {
        printf("%d  ",t.arr[i]);
    }

}
void main()
{
    struct test t1={{5,10,15,20,25},5};
    fun(t1);
    printf("\n");
    for(int i=0;i<t1.n;i++)
    {
        printf("%d  ",t1.arr[i]);
    }
}
