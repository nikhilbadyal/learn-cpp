#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Student{
protected:
    int roll;
public:
    get_roll()
    {
        cout<<"Enter Roll - ";
        cin>>roll;
    }
};
class Test: virtual public Student{
protected:
    float marks1;
public:
    get_marks1()
    {
        cout<<"Enter marks in subject  -";
        cin>>marks1;
    }
};
class Sports: virtual public Student{
protected:
    float marks2;
public:
    get_marks2()
    {
        cout<<"Enter marks in sports -";
        cin>>marks2;
    }
};
class Result: public Test , public Sports{
public:
    show_result()
    {
        float  result = marks1 + marks2;
        cout<<"Roll is - "<<roll<<endl;
        cout<<"Total marks of the student are - "<<result<<endl;
    }
};
int main()
{
    Result r;
    r.get_roll();
    r.get_marks1();
    r.get_marks2();
    r.show_result();
    return 0;
}
