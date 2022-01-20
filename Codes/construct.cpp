#include<iostream>
using namespace std;
class Number;
class Num{
    int num1=0;
    friend class Number;
//      friend void Number::show_data();

};
class Number{
    int x=90;
    Num n2;


public:
    void show_data()
    {
        cout<<x<<endl;
        cout<<n2.num1;
    }
};


int main()
{
    Number n;
    n.show_data();
    return 0;
}
