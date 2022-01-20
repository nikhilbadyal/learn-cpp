#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Complex{
public:
    Complex() = default; //Forcing compiler to give default constructor
  //  Complex() {} //Creating default constructor by own.
 //   Complex(int a) { real =  img = a ;}
    Complex(int a , int b) { real = a; img = b;}
    Complex(float a , int b=100) { real =a ; img =b;}
    void show_data()
    {
        cout<<"Real is - "<<real<<endl;
        cout<<"Imaginary is -"<<img<<endl;
    }
    friend void sum(Complex , Complex);
private:
    int real, img;

};

void sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.show_data();
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    c1.show_data();
    c2.show_data();
    c3.show_data();
    return ;
}
int main()
{
    Complex c1(2,3);
    Complex c2(4);
    Complex c5(2.0);
    Complex c4;
    c4.show_data();
    c5.show_data();
    sum(c1,c2);
    return 0;

}
