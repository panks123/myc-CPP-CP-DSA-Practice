#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name;
public:
    Employee(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};
class partTimeEmployee:public Employee
{
    int wage;
    public:
        partTimeEmployee(int id,string name,int wage):Employee(id,name)
        {
            this->wage=wage;
        }
        int getWage(){return wage;}
};
class fullTimeEmployee:public Employee
{
    int salary;
    public:
        fullTimeEmployee(int id,string name,int salary):Employee(id,name)
        {
            this->salary=salary;
        }
        int getSalary(){return salary;}
};
int main()
{
    fullTimeEmployee e1(100,"John",50000);
    partTimeEmployee e2(101,"Cooper",500);
    cout<<e1.getName()<<" "<<"(EmpID:"<<e1.getID()<<") has salary: "<<e1.getSalary()<<endl;
    cout<<e2.getName()<<" "<<"(EmpID:"<<e2.getID()<<") has wage: "<<e2.getWage()<<endl;
    return 0;
}
