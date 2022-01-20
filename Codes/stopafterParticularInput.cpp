#include<iostream>

int main()
{
	int input;
	while(std::cin>>input && input != 42)
	{
		std::cout<<input<<std::endl;
	}
	return 0;
}
