#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0;
    char name[] = "Nikhil";
    int len = strlen(name);
  //  cout<<i[name];
    for(i=0;i<len;i++)
    {
        cout<< name[i] << i[name] << *(i+name) << *(name+i);
    }
    return 0;
}
