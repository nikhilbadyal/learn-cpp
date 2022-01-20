#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int i;
class Number{
public:
    void set_data(); //int , int
    friend int sum(Number);
private:
    int x,y;
};
void Number::set_data() //int a, int b
{
   // x =a;
   // y =b;

    cout<<"Enter x - ";
    cin>>x;
    cout<<"\nEnter y - ";
    cin>>y;
}
int sum(Number n)
{
    int (Number::*px) = &Number::x; //Pointer to x
    int (Number::*py) = &Number::y;  //Pointer to y

    Number *pn = &n;
    int s = n.*px + n.*py;
    return s;

}
int main()
{
    int res;
    Number num;
    void (Number::* p)() = &Number::set_data; // (int,int)
    (num.*p)();//(10,20);
    res = sum(num);
    cout<<res;
}
