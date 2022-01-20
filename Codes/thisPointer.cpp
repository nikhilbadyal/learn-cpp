#include<iostream>
#include<string.h>
using namespace std;
class Person{
    char *name ;
    short int age;
public:
    Person(const char *s , short int x)
    {
        name = new char[20];
        strcpy(name , s);
        age = x;
    }
    Person greaterAge(Person &p)
    {
        if(this->age>p.age){
            return *this;}
        else{
            return p;
    }}
    display()
    {
        cout<<"Name of person is - "<<name<<endl;
        cout<<"Age of person is - "<<age<<endl;
    }
};
int main()
{
    Person  p1("Nikhil", 19),p2("Aikhil",15),p3("Anshu",199);
    Person p = p1.greaterAge(p3);
    p.display();
    return 0;
}
