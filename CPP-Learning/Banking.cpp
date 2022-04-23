#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<cstdlib>
using namespace std;
#define MIN_BALANCE 1000
class InsufficientFunds
{
public:
    void message()
    {
        cout<<"\nInsufficient Balance\n";
    }
};
class Account
{
private:
    long accountNo;
    string fname,lname;
    float balance;
    static long nextAccountNo;
public:
    Account(){}
    Account(string fname,string lname,float balance);
    long getAccountNo()
    {
        return accountNo;
    }
    string getFName()
    {
        return fname;
    }
    string getLName()
    {
        return lname;
    }
    float getBalance()
    {
        return balance;
    }
    void deposit(float amt);
    void withdraw(float amt);
    static void setLastAccounNo(long accountNum);
    static long getLastAccountNo();
    friend ofstream & operator<<(ofstream &ofs,Account &acc);
    friend ifstream & operator>>(ifstream &ifs,Account &acc);
    friend ostream & operator<<(ostream &os,Account &acc);
};
long Account::nextAccountNo=0;
class Bank
{
    map<long,Account> accounts;
public:
    Bank();
    Account openAccount(string fname,string lname,float balance);
    Account BalanceEnquiry(long accountNum);
    Account deposit(long accountNo,float amt)
    Account withdraw(float amt);
    void showAllAccounts();
    ~Bank();
};
int main()
{
    Bank b;
    Account acc;
    int ch;
    long accountNum;
    string fname,lname;
    float balance,amount;
    cout<<"***Banking System***"<<endl;
    while(1)
    {
        cout<<"\n\tSelect one option below ";
        cout<<"\n\t1 Open an Account";
        cout<<"\n\t2 Balance Enquiry";
        cout<<"\n\t3 Deposit";
        cout<<"\n\t4 Withdrawal";
        cout<<"\n\t5 Close an Account";
        cout<<"\n\t6 Show All Accounts";
        cout<<"\n\t7 Quit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter first name:";
            cin>>fnmae;
            cout<<"Enter last name:";
            cin>>lname;
            cout<<"Enter initial balance:"
            cin>>balance;
            acc=b.openAccount(fnmae,lname,balance);
            cout<<"Congratulations!!! Your account has been created\n";
            cout<<acc;
            break;
        case 7:
            exit(1);
            break;
        default:
            cout<<"Enter valid choice\n";
        }
    }
}
Account::Account(string fname,string lname,float balance)
{
    this->fname=fnmae;
    this->lname=lname;
    this->balance=balance;
    nextAccountNo++;
    accountNo=nextAccountNo;
}

Account Bank::openAccount(string fname,string lname,float balance)
{
    outstream outfile;
    Account acc(fname,lname,balance);
    accounts.insert(pair<long,Account>(acc.getAccNo(),acc));
    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator it;
    for(it=accounts.begin();it!=accounts.end();it++)
    {
        outfile<<it->second;
    }
}
