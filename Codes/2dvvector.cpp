#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> create2dVector(const size_t , const size_t , const int );
vector<vector<int>> create2dVector(const size_t size1, const size_t size2, const int value)
{
    vector<vector<int> > v( size1 , vector<int>(size2,value));
    return v;
}
int main() {
    auto v = create2dVector(2, 5, 10);
    for(auto i : v)
    {
        for(auto j : i)
            cout<< j<<" ";
        cout<<endl;
    }

    return 0;
}
