#include<iostream>
#include<string.h>
using namespace std;
class City{
    char *name;
    int len;
public:
    void get_data()
    {
        char *s ;
        s = new char[30];
        cout<<"Enter city name - ";
        cin>>s;
        len = strlen(s);
        name = new char[len+1];
        strcpy(name,s);
    }
    void show_data()
    {
        cout<<name<<endl;
    }
};
int main()
{
    int i ;
    int ch=0;
    City *p[10];
    int n = 1;
    do{
        p[n] = new City;
        p[n]->get_data();
        n++;
        cout<<"Enter 1 to enter more.\n";
        cin>>ch;

    }while(ch);
    for(i=1;i<n;i++)
    {
        p[i]->show_data();

    }
}
