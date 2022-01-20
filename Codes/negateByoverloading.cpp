#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int i;
class Negate{
public:
    friend void operator -( Negate &);
    void operator -();
    Negate(int a , int b , int c){
        x =a;
        y = b;
        z =c;
    }
    show_data()
    {
        cout<<"Value of x is - "<<x<<endl;
        cout<<"Value of y is - "<<y<<endl;
        cout<<"Value of z is - "<<z<<endl;
    }
private:
    int x;
    int y;
    int z;
};
void Negate::operator -()
{
        x = -x;
        y =  -y;
        z = -z;
}
void operator - ( Negate & s)
{
        s.x =-s.x;
        s.y = -s.y;
        s.z =-s.z;
}
int main()
{
    Negate n(10,20,30);
    //-n;
    operator- (n);
    n.show_data();
    return 0;
}
