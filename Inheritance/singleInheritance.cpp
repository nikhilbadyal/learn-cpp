#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class A{
public:
    friend class B;
    int b;
    void get_ab()
    {
        a = 10;
        b = 5;
    }
    int  get_a()
    {
        return a;
    }
    void show_a()
    {
        cout<<a<<endl;
    }
private:
    int a=100;
};
class B : public A{
    int c;
    int d = a;

public:
    void mul()
    {
        c = b * get_a();
        cout<<d<<endl;
    }
    void show()
    {
        cout<<get_a()<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main()
{
    B b;
    b.get_ab();
    b.mul();
    b.show();
    return 0;
}
