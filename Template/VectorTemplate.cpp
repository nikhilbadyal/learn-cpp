#include<iostream>
#include<string>
#include<cstdbool>
#include<iomanip>
#define factor 3.2084
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
int i;
const int size = 4;
typedef int T;
class vector{
public:
    vector()
    {
        x = new T[size];
       for(i=0;i<size;i++)
            x[i] =0 ;
    }
    vector( T *a)
    {
      //  cout<<"called";
        for(i=0;i<size;i++)
        {
            x[i] = a[i];
        }
    }
    T  operator *(vector &y)
    {
        T sum = 0;
        for(i=0;i<size;i++)
        {
            sum += this->x[i] + y.x[i];
        }
        return sum;
    }

private:
    T * x; // Type of vector;

};
int main()
{
    int arr1[4] = {2,3,4,5};
    int arr2[4] = {6,7,8,9};
  //  vector<int> v1;
 //   vector<int>v2;
    //v1 = arr1;
    //v2 = arr2;
   // int r = v1*

    return 0;
}
