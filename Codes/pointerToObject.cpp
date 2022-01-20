#include<iostream>
using namespace std;
class Item{
    int x;
    float x1;
public:
    void show_data()
    {
        cout<<x<<endl<<x1<<endl;
    }
    void get_data()
    {
        int a;
        float b;
        cin>>a;
        x = a;
        cin>>b;
        x1 = b;
    }
};
const int size = 2;
int main()
{
    int i;
    Item *p = new Item[5];
    Item *d = p;
    for(i=0;i<2;i++)
    {
        p->get_data();
        p++;
    }
    for(i=0;i<size;i++)
    {
        d->show_data();
        d++;
    }

}
