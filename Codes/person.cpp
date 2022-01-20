#include<iostream>
#include<string>
using std::endl;
class Person{
public:
    void show_data();
    void get_data()
    {
        std::cout<<"Enter the name of person.\n";
        std::cin>>name;
        std::cout<<"Enter age of person.\n";
        std::cin>>age;
    }
private:
    std::string name;
    int age;
};
void Person::show_data()
{
    std::cout<<"Name of person is - "<<name<<endl;
    std::cout<<"Age of person is - "<<this->age<<endl;
}
int main()
{
    Person p;
    p.get_data();
    p.show_data();
   // Person::show_data(&p);
  //  Person::show_data(c);
    return 0;
}
