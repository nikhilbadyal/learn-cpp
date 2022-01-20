#include<iostream>
using namespace std;
int main()
{
    int a , *p1 , **p2;
    a = 5;
    p1 = &a;
    p2 = &p1;
    int arr[3] = {10,20,30};
    int *arrp = arr;
    int *arrp1 = &arr[0];
   /* cout<<"Address of a is - "<<p1<<endl;
    cout<<"Address of a is - "<<*p2<<endl;
    cout<<"Address of p1 is - "<<p2<<endl;
    cout<<"Value of a is - "<<*p1<<endl;
    cout<<"Value of a is - "<<**p2<<endl;
    cout<<"Value of p1 is - "<<*p2<<endl;
    cout<<"Value of a after adding 1 is - "<<(*p1+1)<<endl;
    cout<<"Value of a after adding 2 is - "<<(**p2+2)<<endl;*/

    cout<<"Address of array is "<<arrp<<endl;
    cout<<"Address of array is "<<arrp1<<endl;
    cout<<"Address of arr2 is "<<arrp1+1<<endl;

    cout<<"Value of arr1 is "<<*arrp<<endl; // !st value
    cout<<"Value of arr1 is "<<*arrp+1<<endl;  //1st value plus
    cout<<"Address of arr2 is "<<*(arrp1+1)<<endl;

    return 0;

}
