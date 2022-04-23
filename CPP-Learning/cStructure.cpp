#include<iostream>
using namespace std;
struct student
{
    int roll;
    string name;

    void displayStudent()
    {
        cout<<roll<<" "<<name<<endl;
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
