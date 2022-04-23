#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char *name;

    void displayStudent()
    {
        printf("%d %s",roll,name);
    }
};
int main()
{
    struct student s;
    s.roll=9;
    s.name="Renu";
    s.displayStudent();
    return 0;
}
//c structures cannot have functions inside them
