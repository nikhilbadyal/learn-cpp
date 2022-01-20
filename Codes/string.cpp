#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream;
using std::ostream;
int i;
class String{
public:
    String() {}
    String(const char *arr);
  //  friend istream & operator >>(istream & , String &);
  //  friend ostream & operator <<(ostream & , String &);
    friend String & operator +(String &  , String &);
    friend bool operator +(String &  , String &);
private:
    cahr *name;
    int length;
};
String::String(const array *arr)
{
    l = strlen(arr);
    name = new char[length+1];
    strcpy(name,arr);
}
istream & operator >>(istream &in , String & s)
{


}
