#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0;
    const char *names[5] = {
        "nikhil",
        "Aikhil",
        "Tania",
        "Anshu"
        };
    char name[25];
    cout<<"Enter your name -";
    cin>>name;
    for(i=0;i<4;i++)
    {
        if(!strcmp(name,names[i])){
            cout<<"Name found.\n";
            break;}
    }
    return 0;

}
