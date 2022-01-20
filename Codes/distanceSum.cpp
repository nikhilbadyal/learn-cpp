#include<iostream>
#include<string>
#include<cstdbool>
#include<iomanip>
#define factor 3.2084
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
int i;
class DM;
class DB{
public:
    friend void sum(DB , DM);
    void show_data();
    void set_data(float x){
        dis =x;
    }
private:
    float dis;
};
class DM{
public:
    friend void sum(DB , DM);
    void show_data();
    void set_data(float x){
        dis  =  x;
    }
private:
    float dis;
};
void sum(DB db , DM dm)
{
    int choice;
    float c = db.dis + dm.dis*factor; //into feet
    float sum = c/factor;
    DB db1;
    DM dm1;
    db1.set_data(c);
    dm1.set_data(sum);
    cout<<"Enter 1 if you want to see in Meters.\n";
    cout<<"Enter 2 if you want to see in feet.\n";
    cin>>choice;
    if(choice==1)
    {
        dm1.show_data();
    }
    else{
        db1.show_data();
    }
}
void DB::show_data()
{
    cout<<"Distance in feet is "<<dis;

}
void DM::show_data()
{
    cout<<"Distance in meter is "<<dis;

}
int main()
{
    int choice;
    DB db;
    DM dm;
    db.set_data(2.465);
    dm.set_data(1.485);
    sum(db,dm);
    return 0;
}
