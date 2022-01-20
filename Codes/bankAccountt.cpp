#include<iostream>
#include<string>
#include<cstdbool>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
int i;
const int size=100;
class Account{
public:
    static int count;
    Account() { accNo = 0 ; balance = 0;}
    int returnAcc(){return accNo;}
    int returnBalance(){return balance;}
    setAccNo(int x) { accNo = x ;}
    updateBal(int x) { balance += x; }
    updateBal1(int x) { balance -= x; }
private:
    long long int accNo;
    long int balance;
};
int Account::count = 0;
class AccountList{
friend class Withdraw;
public:
    void show_data();
    create_account();  //create during initial
private:
    Account acc[10];
    bool pre_notice();
    bool search1(int );
    void addAccount();
    search();
};
bool AccountList::search1(int x)
{
    for(i=0;i<Account::count;i++)
    {
        if(acc[i].returnAcc()==x)
        {
            return true;
        }
    }
    return false;
}
void AccountList::addAccount()
{
    long int temp;
    cout<<"Enter account number - ";
    cin>>temp;
    if(search1(temp))
    {
        acc[Account::count-1].setAccNo(temp);
        acc[Account::count-1].updateBal(500);
    }
    else{
        cout<<"Account already exist.\n";
    }

}
bool AccountList::pre_notice()
{
   int choice;
   cout<<"You need to deposit $5000 to make account.\n";
   cout<<"You must maintain minimum of $5000 in account.\n";
   cout<<"Enter 1 if you want to proceed.\n" ;
   cin>>choice;
   if(choice) {return true;}
   return  false;
}
void AccountList::show_data()
{
    if(Account::count == 0)
    {
        cout<<"No account exists.\n";
        return ;
    }
    cout<<"\nAccounts available in system are -\n";
    for(i=0;i<Account::count;i++)
    {
        cout<<"Account number - "<<acc[i].returnAcc()<<endl;
        cout<<"Balance - "<<acc[i].returnBalance()<<endl;
    }

}
AccountList::create_account()
{
    int accno,bala=5000;
    for(i=0;i<2;i++)
    {
        cout<<"Costumer "<<(i+1)<<endl;
        if(pre_notice())
        {
            cout<<"Enter account number.\n";
            cin>>accno;
            acc[i].setAccNo(accno);
            acc[i].updateBal(bala);
            Account::count++;
            cout<<"Account created.\n";
        }
        else{
            cout<<"Thanks for visiting . Come back again.\n";
        }
    }

}
AccountList::search()
{
    int x;
    cout<<"Enter Account number - ";
    cin>>x;
    for(i=0;i<Account::count;i++)
    {
        if(acc[i].returnAcc()==x)
        {
            cout<<acc[i].returnAcc();
            cout<<"Account exist.\n";
            cout<<"Balance - "<<acc[i].returnBalance()<<endl;
        }
    }
}
class Withdraw{
public:
    withdraw_money( AccountList * );
    update();
    void deposit(int );
};
Withdraw::withdraw_money(AccountList * a)
{
    int x,temp,flag =1;
    cout<<a->acc[0].returnAcc()<<endl<<endl<<endl;
    cout<<"Enter account number - ";
    cin>>temp;
    for(i=0;i<Account::count;i++)
    {
        if(a->acc[i].returnAcc()==temp)
        {
            cout<<"Enter amount to withdraw - ";
            cin>>x;
            if(x<a->acc[i].returnBalance()){
                 a->acc[i].updateBal1(x);
                if(a->acc[i].returnBalance()<500)
                {
                    a->acc[i].updateBal(x);
                    cout<<"\nInsufficient money.\n";
                }flag=0;
                cout<<"\nAmount withdrawn.\n";}
            else{
                cout<<"\nInsufficient money.\n";
            }
        }
    }
    if(flag == 1)
    {
        cout<<"Account doesn't exist.\n";
    }
}
int main()
{
    AccountList a;
    a.create_account();
    a.show_data();
    Withdraw w;
    w.withdraw_money(&a);
    a.show_data();
    return 0;

}
