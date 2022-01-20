/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
char *sub[]={"Maths","Physics","Chemestry"};
int mark[]={90,77,69};
for(int i=0;i<3;i++)
{
cout<<setw(50)<<sub[i]<<setw(20)<<"="<<setw(30)<<mark[i]<<endl;
}
return 0;
}*/
// CPP Program to test std::setfill manipulator
#include <iostream>
#include <iomanip> // std::setfill, std::setw

int main()
{
	// setfill is x and width is set as 10
	std::cout << std::setfill('x') << std::setw(10);

	std::cout << 77 << std::endl;

	std::string str = "Geeks";

	// setfill is G and width is set as 10
	// And std::left is used set str to left side
	std::cout << std::left << std::setfill('G') << std::setw(10);

	std::cout << str << std::endl;
	return 0;
}
