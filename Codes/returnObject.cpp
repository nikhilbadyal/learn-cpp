#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Complex{
public:
    void set_data();
    void show_data();
    friend Complex sum(Complex , Complex);
private:
    int real,img;
};
void Complex::set_data()
{
    cout<<"Enter real part.\n";
    cin>>real;
    cout<<"Enter imaginary part.\n";
    cin>>img;
}
void Complex::show_data()
{
    cout<<"Real part is - "<<real<<endl;
    cout<<"Imaginary part is -"<<img<<endl;
}
Complex sum(Complex c1 , Complex c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}
int main()
{
    Complex c,c1,c2;
    c1.set_data();
    c2.set_data();
    c = sum(c1,c2);
    c.show_data();
}
