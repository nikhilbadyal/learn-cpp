#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Number{
    int x;
public:
    Number()
    {
        x=100;
    }
    Number(int a)
    {
        x=a;
    }

    void show_data()
    {
        cout<<x<<endl;
    }
    Number(Number &i)
    {
        x = i.x;
    }
};


int main()
{
    Number n;
    Number n2(50);
//    Number n = Number();  // Explicit call
//    Number n2 = Number(150);  // Explicit call
    Number n1(50) ; //Implicit call.
    Number n3(n2); //Copy constructor.
    n.show_data();
    n1.show_data();
    n2.show_data();
    n3.show_data();
    return 0;
}
