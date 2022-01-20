#include<iostream>
#include<string.h>
using namespace std;
class BC{
public:
    int b ;
    show()
    {
        cout<<b<<endl;
    }
};
class DC : public BC{
public:
    int d;
    show()
    {
        cout<<d<<endl;
    }

};
int main()
{
    BC *bc;
    BC base;
    bc = &base;

    bc->b = 100;
    bc->show();

    DC derieve;
    bc = &derieve;

  //  bc->d = 200;   wont work
    bc->b = 200;
    bc->show();


    DC  *dcptr;
    dcptr = &derieve;
    dcptr->d = 300;
    dcptr->show();

    ((DC *)bc)->d = 400;
    ((DC *)bc)->show();


    return 0;
}
