#include<iostream>
using namespace std;

class A{
    int a = 10;
public:
    void show()
    {
        cout<<a<<endl;
    }
};
class B {
    int b = 20;
public:
    void show()
    {
        cout<<b<<endl;
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}
