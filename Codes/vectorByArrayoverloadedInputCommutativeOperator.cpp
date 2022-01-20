#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream;
using std::ostream;
int i;
const int size = 4;
class Vector{
public:
    Vector();
    Vector(int *x);
    friend istream & operator >>(istream &, Vector &);
    friend ostream & operator <<(ostream &, Vector &);
    friend Vector operator * (int a , Vector b);
    friend Vector operator * ( Vector b,int a);
private:
    int v[size];
};
Vector::Vector()
{
    for(i=0;i<size;i++)
    {
        v[i] = 0;
    }
}
Vector::Vector(int *x)
{
    for(i=0;i<size;i++)
    {
        v[i] = x[i];
    }
}
istream & operator >>(istream &in , Vector & b)
{
    for(i=0;i<size;i++)
    {
        cin>>b.v[i];
    }
    return in;
}
ostream & operator <<(ostream & out , Vector & b)
{
    for(i=0;i<size;i++)
    {
        cout<<b.v[i];
    }
    return out;
}
Vector operator *(int a , Vector b)
{
    Vector c;
    for(i=0;i<size;i++)
    {
        c.v[i] = a*b.v[i];
    }
    return c;
}
Vector operator * (Vector b , int a)
{
    return (a*b);
}
int x [size] = {1,2,3,5};
int main()
{
    Vector b;
    b = x;
    Vector m, n;
    m = b*2;
    n = 2*b;
    cout<<b<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
    return 0;
}

