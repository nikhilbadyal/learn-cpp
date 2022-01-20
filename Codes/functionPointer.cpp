#include<iostream>
#include<string.h>
using namespace std;
typedef void (*Funptr)(int , int);
void add(int x , int y )
{
    cout<<(x+y)<<endl;
}
void subtract(int x , int y )
{
    cout<<(x-y)<<endl;
}
int main()
{
    Funptr ptr ;
    ptr = &add;
    ptr(1,2);
    ptr = &subtract;
    ptr(3,5);
    return 0;
}
