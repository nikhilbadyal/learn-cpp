#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class B;
class A{
friend int sum(A , B);
private:
    int a =5;
};
class B{
friend int sum(A , B);
private:
    int b=5;
};
int sum(A a, B b)
{
    return (a.a + b.b);
}
int main()
{
    A a;
    B b;
    cout<<"Sum of both data member by friend is - "<<sum(a,b);
    return 0;
}
