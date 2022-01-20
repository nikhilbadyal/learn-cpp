#include<iostream>
#include<string>
using namespace std;

class Bank{
    public:
    Bank(double am  = 500.0)
    {
        id = 0;
        name = " ";
        amount = am;
        password = " ";
    }
 //   friend iostream & operator>>(iostream & , Bank &  );
  //  friend ostream & operator<<(ostream & , Bank &  );
    friend iostream & operator<<(iostream & , Bank &);
    friend ostream & operator>>(ostream & , Bank &);
    unsigned int returnID() {return id;}
    double returnMoney() {return amount;}
    string  returnpass() {return password;}
    void updateMoney(double am )
    {
        amount -= am;
    }
    void addMoney(double am )
    {
        amount += am;
    }
    void enterDetails();
    void printDeatils();
    void withdrawMoney();
    void DepositMoney();
    void Show();

   // private:
    unsigned long int id;
    string name;
    double amount;
    string password;

};
iostream & operator>>(iostream & in  , Bank & b )
{
    in>>b.id>>b.name>>b.password;
}
ostream & operator<<(ostream & out , Bank & b )
{
    out<<b.id<<b.name<<b.password;
}
void Bank::enterDetails()
{
    cin>>b;
}
void Bank::printDetails()
{
    cout<<*this;
}
void Bank::withdrawMoney()
{
    string s;
    unsigned long int temp;
    cout<<"Enter id and password.\n";
    cin>>id>>s;
    if(returnID() == id && returnpass() == s)
    {
        if(returnMoney() < 500)
        {
            cout<<"You have sufficient balance to withdraw.\n";
            exit(0);
        }
        double temp;
        cout<<"How much money you want to withdraw.\n";
        cin>>temp;
        if((returnMoney() - 500) >   temp)
        {
            cout<<"Insufficient balance,\n";
            exit(0);
        }
        updateMoney(temp);
        cout<<"Do you want to see reamining balance.\n";
        char c;
        cin>>c;
        if( c == 'y' || c == 'Y')
        {
            cout<<returnMoney();
        }
    }
    else{
        cout<<"Invalid credentials.\n"<<endl;
        exit(0);
    }
}
void Bank::DepositMoney()
{
    string s;
    unsigned long int temp;
    cout<<"Enter id and password.\n";
    cin>>id>>s;
    if(returnID() == id && returnpass() == s)
    {
        double temp;
        cout<<"How much money you want to add.\n";
        cin>>temp;
        addMoney(temp);
    }
    else{
        cout<<"Invalid credentials.\n"<<endl;
        exit(0);
    }
}
void Bank::showBalance()
{
    string s;
    unsigned long int temp;
    cout<<"Enter id and password.\n";
    cin>>id>>s;
    if(returnID() == id && returnpass() == s)
    {
       cout<<"Your "<<returnmoey();
    }
    else{
        cout<<"Invalid credentials.\n"<<endl;
        exit(0);
    }
}
int main()
{
    bank b;
    b.enterDetails();
    return 0;
}
