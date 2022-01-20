#include<iostream>
#include<string.h>
#include<cstdbool>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
class A{
    friend class B;
    int aas;
};
class B{
public:
    A a[10];
    a[1].aas = 5;
};
int main()
{
    return 0;
}
