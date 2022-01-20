#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Time{
public:
    void get_data();
    void show_data();
    void add_time(Time , Time );
private:
    int hour;
    int min;
    int sec;
};
void Time::get_data()
{
   // cout<<"Enter time.\n";
    cout<<"Enter hour.\n";
    cin>>hour;
    cout<<"Enter minute.\n";
    cin>>min;
    cout<<"Enter seconds.\n";
    cin>>sec;
}
void Time::show_data()
{
    cout<<"\nEntered time was \n";
    cout<<"Hour  Minute  Seconds"<<endl;
    cout<<hour<<"  "<<min<<"  "<<sec;
}
void Time::add_time(Time t1 , Time t2)
{
    sec = t1.sec + t2.sec;
    min = sec/60;
    sec = sec%60;
    min = min + t1.min + t2.min;
    hour = min/60;
    min = min%60;
    hour = hour + t1.hour + t2.hour;
}
int main()
{
    Time t1, t2,t3;
    t1.get_data();
    t2.get_data();
    t1.show_data();
    t2.show_data();
    t3.add_time(t1,t2);
    t3.show_data();
    return 0;
}
