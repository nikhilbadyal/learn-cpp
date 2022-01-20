#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<stdexcept>
using namespace std;
bool check_leap(int );
bool check_leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return  true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}
class Date{
    int day;
    int month;
    int year;
    vector<int>monthlast{31,28,31,30,31,30,31,31,30,31,30,31};
    vector<int>_31mon{1,3,5,7,8,10,12};
    vector<int>_2829mon{2};
    vector<int>_30mon{4,6,9,11};
    bool is_valid(Date &check)
    {
        if(std::find(_31mon.begin(),_31mon.end(),check.month) != _31mon.end() && check.day <=31 )
           { return true; }
        if(std::find(_30mon.begin(),_30mon.end(),check.month) != _30mon.end() && check.day <=30 )
           { return true; }
        if(std::find(_2829mon.begin(),_2829mon.end(),check.month) != _2829mon.end())
        {
            if(check_leap(check.year) && check.day <=29 )
               return true;
            if(!check_leap(check.year) && check.day<=28)
                return true;
            return false;

        }
        return false;
    }
public:
    Date(): day(0), month(0),year(0){}
    void set_date();
    void show_date();
    friend ostream & operator<<(ostream & , Date );
    friend istream & operator>>(istream & , Date );
  //  friend Date & operator+(const Date & , const Date& );
    friend bool  operator==(const Date &  , const Date& );
    friend bool  operator!=(const Date &  , const Date& );
    friend bool  operator<(const Date &  , const Date& );
    friend bool  operator>(const Date &  , const Date& );
    Date & operator+=(const Date &);
    Date & operator=(const Date &);
    Date(const Date &given) : day(given.day), month(given.month), year(given.year) {}

};
Date & Date::operator+=(const Date &rhs)
{
    cout<<"Don't know logic";
    return *this;
}
ostream & operator<<(ostream &out , Date d)
{
    out<<d.day<<" "<<d.month<<" "<<d.year;
    return out;
}
istream & operator>>(istream &in , Date d)
{
    in>>d.day>>d.month>>d.year;
    if(!in)
        d = Date();
    return in;
}
Date & Date::operator=(const Date& rhs)
{
    day = rhs.day;
    month = rhs.month;
    year = rhs.year;
    return *this;
}
bool  operator==(const Date& lhs,const Date& rhs)
{
    return (lhs.day == rhs.day &&
            lhs.month == rhs.month &&
            lhs.year == rhs.year);

}
bool  operator!=(const Date& lhs,const Date& rhs)
{
    return !(lhs == rhs);
}
bool  operator<(const Date& lhs,const Date& rhs)
{
    if(lhs.year == rhs.year)
    {
        if(lhs.month == rhs.month)
        {
            if(lhs.day == rhs.day)
                return false;
            if(rhs.day>day)
                return true;
            return false;
        }
        if(rhs.month>lhs.month)
            return true;
        return false;
    }
    if(rhs.year>lhs.year)
        return true;
    return false;
}
bool  operator>(const Date& lhs,const Date& rhs)
{
    if(lhs != rhs)
    {
        if(lhs<rhs)
            return false;
        return true;
    }
    return false;
}

/*
Date & operator+(const Date & lhs , const Date & rhs)
{
    Date result = lhs;
    auto tempDate = result.day + rhs.day;
    auto extra;
    if(std::find(_30month.begin(),_30month.end,result.month))
    {
        extra = 30-tempDate;
        result.date = result.date - extra;
    }
    if(std::find(_30month.begin(),_30month.end,(result.month+1)))
    {

    }
    result += rhs;
    return result;
}*/
/*
void Date::set_date()
{
    cout<<"\nEnter date in Day/Month/Year format "<<endl;
    std::string s;
    getline(cin,s);
    auto day1 = std::find(s.begin(),s.end(),'/');
    if(day1 == s.end()){ throw ("Wrong");}
    auto mon = std::find(day1+1,s.end(),'/');
    if(mon == s.end()){throw ("Wrong");}
    string da(s.begin(),day1);
    string mo(day1+1,mon);
    string y(mon+1,s.end());
    try{day = stoi(da);
    month = stoi(mo);
    year = stoi(y);}
    catch(const std::invalid_argument& ia) {
        *this = Date();
	  std::cerr << "Invalid argument: " << ia.what() << '\n';
  }
   catch(std::string er)
   {
       cout<<er;
       *this = Date();
       return ;
   }

   if(!is_valid(*this))
        cout<<"Invalid date.\n";
}*/
void Date::set_date()
{
    cout<<"Enter date in DD/MM/YY format \n";
    cin>>*this;
}
int main()
{
    Date d;
    while(true)
        d.set_date();
    return 0;
}
