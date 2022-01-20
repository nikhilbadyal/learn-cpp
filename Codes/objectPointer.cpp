#include<iostream>
using namespace std;
class item{
    int a = 6;
public:
    void show_data()
    {
        cout<<a<<endl;
    }
};
int main()
{
    item x;
    item *ptr;
    ptr = &x;
    x.show_data();
    ptr->show_data();
    (*ptr).show_data();  //*ptr is alias of x
    item *pptr = new item;
    pptr->show_data();
    return 0;
}
