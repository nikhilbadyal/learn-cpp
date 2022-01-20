#include<iostream>
#include<string.h>
using namespace std;
class Subject{
public:
    friend class SubjectList;
    friend class StudentList;
  //  int returnCode () {return code;}
  //  Subject() {}
    Subject(){cout<<"Enter Subject name - "; cin>>name; cout<<"Enter subject code - "; cin>>code;}
private:
    int code;
    string name;
};
class SubjectValue{
    friend class StudentList;
    friend class SubjectList;
    int value;
};
class SubjectList{
public:
    friend class Student;

    static Subject X[2];  // HERE IT GIVES ERROR.
    SubjectValue sv[2];
    set_subject();
    show_subject();
};
Subject SubjectList::X[2];
class Student{
public:
    friend class StudentList;

    SubjectList sub;
private:
    unsigned long int roll;
    unsigned long long int  phone;
    string name;
};
class StudentList{
public:
    Student s[2];
    set_data();
    show_data();
    show_student(int );
    show_subjects(int );
};
StudentList::set_data()
{
    int i ;
    for(i=0;i<2;i++){
    cout<<"Enter student name - ";
    cin>>s[i].name;
    cout<<"Enter student phone - ";
    cin>>s[i].phone;
    cout<<"Enter roll - ";
    cin>>s[i].roll;
    s[i].sub.set_subject();}
}
StudentList::show_data()
{
    int i;
    for(i=0;i<2;i++){
    cout<<"Name of Student - "<<s[i].name<<endl;
    cout<<"Phone of Student - "<<s[i].phone<<endl;
    cout<<"Roll of Student - "<<s[i].roll<<endl;
    s[i].sub.show_subject();}

}
SubjectList::set_subject()
{

    int i;
    int value[2];
    cout<<"Enter 1 for the subject you want to choose. \n";
   for(i=0;i<2;i++)
   {
       cin>>value[i];
   }
   for(i=0;i<2;i++)
   {
       sv[i].value = value[i];
   }
}
SubjectList::show_subject()
{
    int flag = 1;
    int i;
    cout<<"Subjects choose by student are - "<<endl;
    for(i=0;i<2;i++)
    {
        if(sv[i].value == 1)
        {
            cout<<X[i].name<<endl;
            flag =0 ;
        }
    }
    if(flag) {
        cout<<"None\n";
    }
}
StudentList::show_student(int x)
{
    int flag = 1;
    cout<<"Students who choose subject represented by subject code "<<x<<" are"<<endl;
    int i,j;
    int count =0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(s[i].sub.X[j].code == x)
            {
                if(s[i].sub.sv[j].value == 1)
                {
                    flag = 0;
                    cout<<s[i].name<<endl;
                }
            }
        }

    }
    if(flag) {cout<<"None\n";}
}
StudentList::show_subjects(int x)
{
    cout<<"Subjects choose by student with roll "<<x<<" are - ";
    int flag = 1;
    int i=0;
    for(i=0;i<2;i++)
    {
        if(s[i].roll == x)
        {
            flag = 0;
            s[i].sub.show_subject();
        }
    }
    if(flag) {cout<<"None\n";}
}
int main()
{
    StudentList s;
    s.set_data();
    s.show_data();
    s.show_student(11);
    s.show_subjects(69);
    return 0;
}
