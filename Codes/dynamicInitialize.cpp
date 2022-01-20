#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class FixedDeposit{
public:
    FixedDeposit() {}
    FixedDeposit(int a, int y , float r=0.12);
    FixedDeposit(int a, int y , int r);
    show_data();
private:
    long int amount;
    int year;
    float rate;
    float returnAmount;
};
FixedDeposit::FixedDeposit(int a , int y , float r)
{
    amount = a;
    year = y;
    returnAmount = amount;
    for(i=0;i<y;i++)
        returnAmount= returnAmount*(1.0+r);
}
FixedDeposit::FixedDeposit(int a , int y , int r)
{
    amount = a;
    year = y;
    rate = r;
    returnAmount = amount;
    for(i=0;i<y;i++)
        returnAmount= returnAmount*(1.0+float(r)/100);
}
FixedDeposit::show_data()
{
    cout<<"Principal  amount -"<<amount<<endl;
    cout<<"Returned value"<<returnAmount<<endl;
}
int main()
{
    int amount,years,rate;
    float Rate;
    FixedDeposit f1, f2 ,f3;

    cout<<"Enter amount to be deposited.\n";
    cin>>amount;
    cout<<"Enter no. of years.\n";
    cin>>years;
    cout<<"Enter rate(in number).\n";
    cin>>rate;
    f1= FixedDeposit(amount,years,rate);

    cout<<"Enter amount to be deposited.\n";
    cin>>amount;
    cout<<"Enter no. of years.\n";
    cin>>years;
    cout<<"Enter rate(in decimal).\n";
    cin>>Rate;
    f2=FixedDeposit(amount,years,Rate);


    cout<<"Enter amount to be deposited.\n";
    cin>>amount;
    cout<<"Enter no. of years.\n";
    cin>>years;
    f3=FixedDeposit(amount,years);

    cout<<"Deposit 1\n";
    f1.show_data();

    cout<<"Deposit 2\n";
    f2.show_data();

    cout<<"Deposit 3\n";
    f3.show_data();

    return 0;
}


