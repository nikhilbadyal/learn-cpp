#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Student{
protected:
    long int roll;
public:
    get_data()
    {
        cout<<"Enter roll of student - ";
        cin>>roll;
    }
    show_data()
    {
        cout<<endl<<"Entered roll is -"<<roll;
    }
};
class Test : public Student{
protected:
    float sub1;
    float sub2;
public:
    get_marks()
    {
        cout<<"Enter marks in subject  1 - ";
        cin>>sub1;
        cout<<endl<<"Enter marks in subject  2 - ";
        cin>>sub2;
    }
    show_marks()
    {
        cout<<endl<<"Marks in subject 1 "<<sub1<<endl;
        cout<<"Marks i  subject 2 "<<sub2<<endl;
    }
};
class Result : public Test{
private :
    int result ;
public:
    void show_result()
    {
        float  c ;
        c = (((sub1+sub2)/500)*100);
        cout<<"Student percentage is - "<<c;
    }
};
int main()
{
    Result student1;
    student1.get_data();
    student1.show_data();
    student1.get_marks();
    student1.show_marks();
    student1.show_result();
    return 0;
}
