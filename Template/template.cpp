#include<iostream>
#include<string.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;
template<typename T>
int compare(const T & t1, const T & t2)
{
if(t1>t2) return 1;
return 0;
}
template<class S>  // i can use template instead of class keyword.
foo(S *p)
{
    S temp = *p;
    cout<<temp;
//    return ;
}
template<unsigned N,unsigned M>
int comparee(const char (&p1)[N] , const char (&p2)[M])
{
    return strcmp(p1,p2);
}
int main()
{
    int x = 119.5;
    int y = 111;
    int arr[]  = {187};
    cout<<compare(x,y)<<endl;
    foo(arr);
    cout<<comparee("hie","mom")<<endl;
    return 0;
}
