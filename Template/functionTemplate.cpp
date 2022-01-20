#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

/*
int compare(const int x,const  int y)
{
    if(x>y) {return 1;}
    if(x<y) {return -1;}
    return 0;
}*/
//template<typename T> both works fine
template<class T>
int compare(const T x, const T y)
{
    if(x>y) {return 1;}
    if(x<y) {return -1;}
    return 0;
}
template<typename S>
S foo(S *p)
{
    S temp = p[0];
    return temp;
}
template<unsigned N , unsigned M>
int coomp(const char (&p1)[N],const  char (&p2)[M])
{
    return strcmp(p1,p2);

}
int main()
{
    int a =10 ;
    int b=80;
    int c[] = {1,2,3};
   // cout<<compare(10,100);  // Compiler itself deduce type of t
   // vector<int>v1{1,2,3}, v2{1,4,3};
   // cout<<compare(v1,v2);
   // cout<<foo(c);
   cout<<coomp("Hi","mom");

}
