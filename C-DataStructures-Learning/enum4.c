#include<stdio.h>
enum state{Active1=1,Failed1=0,Freezed=0};
void main()
{
    enum state{Active=1,Failed=0,Freezed=0};
    //gives error:redeclaration of 'failed'
    printf("%d %d %d",Active,Failed,Freezed);
}
