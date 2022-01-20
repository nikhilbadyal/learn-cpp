#include<iostream>
#include<string>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
int i;
class Dyna{
    char *name;
    int length;
    public:
    Dyna(){
        length =0;
        name = new char[length+1];
    }
    Dyna(char *s )
    {
        length = strlen(s);
        name = new char[length +1];
        strcpy(name, s);
    }
    display()
    {
        cout<<"Name is - "<<name<<endl;
    }
    join(Dyna &, Dyna&);
};
Dyna::join(Dyna &n1, Dyna &n2)
{
    length = n1.length + n2.length;
    name = new char[length+1];
    strcpy(name,n1.name);
    strcat(name,n2.name);
}
int main()
{
    char *first =(char*) "Nikhil";
    Dyna name1(first) , name2((char*)"Badyal") ,name3((char*)"Sharma") , joined1 , joined2;
    name1.display();
    name2.display();
    name3.display();
    joined1.join(name1,name2);
    joined2.join(joined1,name3);
    joined1.display();
    joined2.display();
    return 0;
}



