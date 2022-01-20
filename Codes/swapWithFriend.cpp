#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Num2;

class Num1{
friend void exchange(Num1 &, Num2& );
public:
    void show_data()
    {
        cout<<"Value is - "<<a<<endl;
    }

private:
int a=10;

};


class Num2{
friend void exchange(Num1 &, Num2&);
public:
    void show_data()
    {
        cout<<"Value is - "<<b<<endl;
    }
private:
int b = 20;
};


void exchange(Num1 &n1, Num2& n2)
{
    int c = n1.a;
    n1.a = n2.b;
    n2.b = c;
}



int main()
{
    Num1 n1;
    Num2 n2;
    cout<<"Before Swap.\n";
    n1.show_data();
    n2.show_data();
    exchange(n1,n2);
    cout<<"After Swap.\n";
    n1.show_data();
    n2.show_data();
    return 0;
}
