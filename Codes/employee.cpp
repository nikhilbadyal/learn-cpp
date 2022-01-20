#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Employee{
public:
    void show_data();
    void get_data();
private:
    char name[30];
    int age;
};
void Employee::get_data()
{
    cout<<"Enter Employee details .\n";
    cout<<"Enter name - ";
    cin>>name;
    cout<<"Enter age - ";
    cin>>age;
}
void Employee::show_data()
{
    cout<<"Name of Employee - "<<name<<endl;
    cout<<"Age of Employee - "<<age<<endl;
}
int main()
{
    Employee e[2];
    for(i=0;i<2;i++)
    {
        e[i].get_data();
    }
    for(i=0;i<2;i++)
    {
        e[i].show_data();
    }
    return 0;
}
