#include<iostream>
#include<vector>
#include<cmath>
void printPrime(unsigned long long int ,unsigned long long  int);
void givePrime(std::vector<std::vector<unsigned long long int>> & );
void printPrime(unsigned long long int x , unsigned long long int y)
{
    unsigned long long int i;
    for( i = x; i <= y  ; ++i )
    {
        int flag = 1;
        unsigned long long int square = sqrt(i);
        for(unsigned long long int j = 2; j<=square ;++j )
        {

            if( i%j == 0 )
            {
                flag = 0 ;
            }
        }
        if(flag)
        {
             std::cout<<i<<"  ";
        }
    }
}

void givePrime(std::vector<std::vector<unsigned long long int> > & v)
{

     for(auto i : v)
     {
         unsigned long long int m ,n;
         m = i[0];
         n = i[1];
         printPrime(m,n);
     }
}
int main()
{
	int input;
	std::cout<<"Enter test case \n";
	std::cin>>input;
	std::vector<std::vector<unsigned long long int> >cases(input,std::vector<unsigned long long  int>(2));
    for( auto itr = cases.begin(); itr != cases.end(); ++itr)
    {
        std::vector<unsigned long long int>values;
        unsigned long long  int m ,n ;
        std::cout<<"Enter value of 'm' and 'n'\n";
        std::cin>>m>>n;
        values.push_back(m);
        values.push_back(n);
        *itr = values;
    }
    givePrime(cases);
	return 0;
}
