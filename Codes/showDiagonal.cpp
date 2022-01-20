#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i , j;
    int row = 2;
    int column  = 2;
    for(i = row , j = column  ; i<= 4 && j <=4 ; ++i , ++j)
    {
        cout<<i<<j<<endl;
    }
    int k , l;
    for(k = row+1 ,  l = column-1  ; k <= 4 && l>=1 ; ++k , --l)
    {
        cout<<k<<l<<endl;
    }
    for(i = row-1 , j = column-1  ; i>= 1 && j>=1 ; --i , --j)
    {
        cout<<i<<j<<endl;
    }
    for(i = row-1 , j = column+1  ; i>= 1 && j<=4 ; --i , ++j)
    {
        cout<<i<<j<<endl;
    }
}
