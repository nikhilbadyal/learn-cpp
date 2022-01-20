#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>roll2;
   // vector<vector<int>>roll;
    // initialise
    vector<int>roll;
    vector<int>roll1(roll2);
    vector<int>roll3 = roll2;
    vector<int>roll4(10,5);
    vector<int>roll5(10);
    vector<int>roll6{1,2,3,4,5};
    vector<int>roll7 = {1,2,3,4,5};
    vector<string> articles = {"a","an","the"};
    vector<string>names(10,"nikhil");

    cout<<roll4[2];



    return 0;
}
