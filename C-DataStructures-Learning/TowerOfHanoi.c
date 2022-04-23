#include<stdio.h>
int i=1;
void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("%d. (%d to %d)\n",i++,A,C);
        TOH(n-1,B,A,C);
    }
}
void main()
{
    /*           |
                _|_
              _|_|_|_
            _|___|__|_
          _|_____|____|_
             tower no. 1(A)
             (source tower)

                                                       //We have to move the all the disks from source tower to destination tower keeping
                                                         in mind the following two rules:
                                                         1.Only one disk can be moved at a time
                                                         2.No disk can be placed on the top of any smaller disk


                 |
                 |
                 |
                 |
          _______|_______
             tower no. 2(B)
            (auxiliary tower)

                 |
                 |
                 |
                 |
          _______|_______
             tower no. 3(C)
        (destination tower)
*/
   int sourcetower=1,auxtower=2,desttower=3;
   int n;
   printf("Enter no. of disks in source tower:\n");
   scanf("%d",&n);
   printf("Stepwise filling of disks from one tower to another:\n");
   TOH(n,sourcetower,auxtower,desttower);
}
