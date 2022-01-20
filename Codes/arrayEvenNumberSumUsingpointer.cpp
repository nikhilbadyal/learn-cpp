#include<iostream>
using namespace std;
int main()
{
    int num[5],count,sum=0,i;
    cout<<"Enter count - ";
    cin>>count;
    for(i=0;i<5;i++)
        cin>>num[i];
    int *ptr = num;
    for(i=0;i<5;i++)
    {
        if(!(*ptr%2))
        {

            sum+= *ptr;
        }
        ptr++;
    }

    cout<<"Sum of even values is - "<<sum;
    return 0;

}
