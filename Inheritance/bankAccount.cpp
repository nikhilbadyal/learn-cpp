#include<iostream>
#include<string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#define r 0.15
#define min 500
#define service 100
class Account{
public:
    Account()
    {
        cout<<"Enter account type - ";
        cin>>type;
        cout<<"Enter account  number - ";
        cin>>accId;
        cout<<"Enter name of person - ";
        cin>>name;
    }
protected:
    long long int accId;
    string name;
    string type;

};
class SavingAccount : public Account{
public:

    void withdraw()
    {
        int w,test;
        cout<<"Enter amount to withdraw money - ";
        cin>>w;
        if(w>balance)
            cout<<"Insufficient balance.\n";
        else
            balance-=w;
            cout<<"Amount withdrawn.\n";
        if(balance<min)
            cout<<"Remaining amount is less than minimum specified.You will be penalized for this.Enter 1 if you want to continue.\n";
            cin>>test;
            if((!test))
                balance+=w;

    }
    void display()
    {
        cout<<"Your Saving balance is - "<<balance<<endl;
    }
    void deposit()
    {
        int d;
        cout<<"Enter money to deposit - ";
        cin>>d;
        balance+=d;
        cout<<"Amount deposited.\n";
    }
    void set_date()
    {

        cout<<"Enter day , month and year.\n";
        cin>>d,m,y;

    }
    void calcInterest()
    {
        int i;
        int d1,m1,y1;
        int D[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        cout<<"Enter today's date - ";
        cin>>d1,m1,y1;
        int firstDay = d;
        int lastDay = d1;
        for(i=0;i<m;i++)
        {
            firstDay += D[i];
        }
        for(i=0;i<m1;i++)
        {
            lastDay += D[i];
        }
        int totalDay = lastDay - firstDay ;
        float totalYear ;
        totalYear = float(totalDay)/365 + y1-y;
        float interst ;
        interst = totalYear*r*balance;
        cout<<"Total interest is - "<<interst;
        balance+=interst;
    }
private:
    float balance=500;
    int d,m,y;
};
class CurrentAccount{
public:
    void withdraw()
    {
        int w,test;

        cout<<"Enter amount to withdraw money - ";
        cin>>w;
        if(w>balance)
            cout<<"Insufficient balance.\n";
        else
            balance-=w;
            cout<<"Amount withdrawn.\n";
        if(balance<min)
            cout<<"Remaining amount is less than minimum specified.You will be penalized for this.Enter 1 if you want to continue.\n";
            cin>>test;
            if((!test))
                balance+=w;

    }
    void display()
    {
        cout<<"Your Saving balance is - "<<balance<<endl;
    }
    void deposit()
    {
        int d;
        cout<<"Enter money to deposit - ";
        cin>>d;
        balance+=d;
        cout<<"Amount deposited.\n";
    }
private:
    float balance=500;
};
int main()
{
    Account a;

    return 0;
}
