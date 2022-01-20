#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class A{
public:
    void show_data()
    {
        cout<<"A called. \n";
    }
};
class B : public A{
public:
    void show_data()
    {
        cout<<"B called.\n";

    //   A::show_data();
    }

};
int main()
{
    B b;
    b.show_data();
    b.A::show_data();
    return 0;
}
