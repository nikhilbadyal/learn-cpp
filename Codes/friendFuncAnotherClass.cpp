#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class B;
class A{
private:
    int a=10;
public:
    friend class B;
    void show_data(B x);
    void show_data();
};
class B{
private:
    int b =5;
public:
    friend class A;
    A d;
    d.a;
 //  friend void A::show_data(B &);
};
void A::show_data(B  x)
{
   cout<<"It's class A here ,with b = "<<x.b<<endl;
}
void A::show_data()
{
    cout<<"It's class A here ,with a = "<<a;
}
int main()
{
    A a;
    B b;
    a.show_data(b);
    a.show_data();
    return 0;
}
