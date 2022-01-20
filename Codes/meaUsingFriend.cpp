#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int i;
class Sample{
    public:
    void set_data(float x , float y)
    {
        a = x;
        b = y;
    }
    friend float mean(Sample );
private:
    float a;
    float b;
    float c;
};
float mean(Sample s1)
{
    return ((s1.a + s1.b)/2);
}
int main()
{

    Sample s;
    s.set_data(2.5,2.5);
    cout<<"Mean of above numbers is : "<<mean(s);
}
