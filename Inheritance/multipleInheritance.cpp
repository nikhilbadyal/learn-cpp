#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class A{
protected:
    int m;
public:
    void get_m()
    {
        cout<<"Enter M - ";
        cin>>m;
    }
};
class B{
protected:
    int n;
public:
    void get_n(){
        cout<<"Enter N - ";
        cin>>n;
    }
};
class C : public A , public B
{
    int o = 5;
public:
    void get_c()
    {
        cout<<"Enter C - ";
        cin>>o;
    }
    void show_data()
    {
        cout<<m<<endl;
        cout<<n<<endl;
        cout<<m*n<<endl;
        cout<<o;
    }
};
int main()
{

    C c;
    c.get_c();
    c.get_m();
    c.get_n();
    c.show_data();
}

