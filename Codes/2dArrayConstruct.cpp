#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Matrix{
    int **p; //Pointer to array.
    int d1 ,d2;
public:
    Matrix(int x ,int y);
    void get_data(int i ,int j, int value)
    {
        p[i][j] = value;

    }
    int  show_data(int i , int j)
    {
        return p[i][j];
    }
    ~Matrix()
    {
        for(i=0;i<d1;i++)
        {
            delete p[i];
        }
        delete p;
    }
};
Matrix::Matrix(int x , int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(i=0;i<d1;i++)
    {
        p[i] = new int[d2];
    }
}
int main()
{
    int x,y;
    cout<<"Enter size of matrix - \n";
    cin>>x>>y;
    Matrix m(x,y);
    cout<<"Enter elements of matrix row by row.\n";
    int i , j , value;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>value;
            m.get_data(i,j,value);
        }
    }
    cout<<"\n";
    cout<<m.show_data(1,1);
    return 0;

}
