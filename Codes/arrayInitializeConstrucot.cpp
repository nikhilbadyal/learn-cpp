#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Array{
public:
    Array(int x) {
        for(i=0;i<10;i++){
            arr[i] = x;
        }
    }
    void show_data()
    {
        cout<<"Entered array is \n";
        for(i=0;i<10;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
private:
    int arr[10];
};
int main()
{
    Array a(7);
    a.show_data();
}
