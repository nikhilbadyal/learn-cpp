#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Const{
public:
    Const() {cout<<"In default"<<endl;}
    Const(int x) {cout<<"In Value"<<endl;code = x;}
    Const(Const & c) {cout<<"In copy"<<endl;code = c.code;}
    show_data()
    {
        cout<<"Code of object is - "<<code<<endl;
    }
    Const& operator = (const Const &t)
	{
		cout<<"Assignment operator called "<<endl;
		code = t.code;
		return *this;
	}
private:
    int code;
};
int main()
{

    Const A;
   // Const A(1000);
  //  Const B(A); //calls copy implicitly
    Const C = A; // Calls Copy explicitly
   Const D; // Calls default
   D =C; // Calls assignment
   A.show_data();
  //  B.show_data();
  //  C.show_data();
    D.show_data();
    return 0;
}
