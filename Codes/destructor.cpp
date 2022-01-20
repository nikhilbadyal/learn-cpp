#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int count=0;
class Dest{
public:

    Dest() {
        count++;
        cout<<"\nNo. of objects created are - "<<count;
    }
    ~Dest(){
        cout<<"\nNo. of objects destroyed - "<<count;
        count--;
    }

};
//int Dest::count=0;
int main()
{
    Dest  a1,a2,a3,a4;
    {
        Dest a5;
    }
    {

        Dest a6;
    }
    return 0;
}
