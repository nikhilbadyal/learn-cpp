#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Alpha{
protected:
    int i;
public:
    Alpha(int a){
        i =a;
        cout<<"Alpha constructor called.\n";
    }
};
class Beta{
protected:
    float j;
    Beta(float b)
    {
        j =b;
        cout<<"Beta constructor called.\n";
    }
};
class Gamma : public Alpha , public virtual Beta{  // Virtual are called first.s
protected:
    int k;
public:
    Gamma(int x , float y , int z):  Alpha(x) ,Beta(y){
        k = z;

        cout<<"Gamma constructor called.\n";
    }
    void show_data()
    {
        cout<<"A is - "<<i;
        cout<<"B is - "<<j;
        cout<<"C is - "<<k;
    }
};
int main()
{
    Gamma g(1,1.5,2);
    g.show_data();
    return 0;
}
