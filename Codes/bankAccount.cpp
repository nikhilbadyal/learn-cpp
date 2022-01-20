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
class Account{
public:
   // void set_data(string , int , string , int );
    bool set_data();
    void deposit(int );
    void withdraw(int);
    void show_data();
    void show_data1();
    void noAccountShow()
    {
        cout<<"           Account doesn't exist.\n";
    }
private:
    string name;
    long long int accNo;
    string accType;
    long int balance;
};
//void Account::set_data(string Nam, int num, string type, int bal )
bool Account::set_data()
{
    int choice;
    cout<<"You need to pay 500 to open bank account.\n";
    cout<<"You need to have a minimum of 500 rupee to create account.\n";
    cout<<"Enter 1 if you want to proceed.\n";
    cin>>choice;
    if(choice){
        balance = 500;
        cout<<"Enter name of Person.\n";
        cin>>name;
        cout<<"Enter Account number.\n";
        cin>>accNo;
        cout<<"Enter Account type you want.\n";
        cin>>accType;
        return true;}
    else{
        return false;
    }
}
void Account::deposit(int x)
{
    balance += x;
    cout<<"\nMoney deposited.\n";
}
void Account::withdraw(int x)
{
    if(x<balance){
        balance -= x;
        if(balance<500)
        {
            balance += x;
            cout<<"\nInsufficient money.\n";

        }
        cout<<"\nAmount withdrawn.\n";}
    else{
        cout<<"\nInsufficient money.\n";
    }
}
void Account::show_data()
{
    cout<<"Name of person - "<<name<<endl;
    cout<<"Available balance - "<<balance<<endl;
}
void Account::show_data1()
{
    cout<<setw(13)<<name<<setw(17)<<accType<<setw(14)<<balance<<endl;
}
int main()
{
    int choice;
    Account a[10];
    int value[10];
  //  a.set_data("Nikhil",1810501069,"Savings",10000);
    for(i=0;i<2;i++)
    {
        value[i]=a[i].set_data();
        if(value[i])
        {
            do{
                cout<<"Enter 1 if you want to deposit.\n";
                cout<<"Enter 2 if you want to withdraw.\n";
                cout<<"Enter 3 if you want to see balance.\n";
                cout<<"Enter 4 to exit.\n";
                cin>>choice;

                switch(choice)
                {
                    case 1: a[i].deposit(10000); break;
                    case 2: a[i].withdraw(1000); break;
                    case 3: a[i].show_data(); break;
                    case 4: break;
                    default: cout<<"Invalid option selected.\n";
                }
            }while(choice!=4);
        }
        else{
            cout<<"Thank you ! See you soon.\n";
        }
    }
    cout<<"Enter 1 if you want to see whole data.\n";
    cin>>i;
    if(i)
    {
        cout<<"See Details.\n";
        cout<<setw(12)<<"Name"<<setw(20)<<"Account type"<<setw(12)<<"Balance"<<endl;
        for(i=0;i<2;i++)
        {
            if(value[i]){
                a[i].show_data1();
            }
            else{
                a[i].noAccountShow();
            }

        }
    }
    return 0;
}

