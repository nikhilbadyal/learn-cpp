#include<iostream>
using namespace std;
const int size = 3;
template<class T>   //  class int
class Vector{
    T x[size];
public:
    Vector() = default;
   /* Vector()
    {
        int i ;
        x = new T[size];   // x = new int[size];
        for(i=0;i<size;i++)
            x[i] = 0;
    }*/
    Vector(T *a)
    {
        int i;
        for(i=0;i<size;i++)
            x[i]= a[i];
    }
    T operator *(Vector & b)
    {
        int i;
        T sum =0;
        for(i=0;i<size;i++)
        {
            sum += this->x[i] * b.x[i];
        }
        return sum;
    }
};
int main()
{
    int A[] = {1,2,3};
    int B[] = {4,5,6};
    Vector<int> v1;
    Vector<int> v2;
    v1 = A;
    v2 = B;
    cout<<"Result is - "<<v1*v2<<endl;
    return 0;
}
