#include<iostream>
using namespace std;
int main()
{
 unsigned long  long int  n, num1 = 1, num2 = 2, num3;

 //printf("Enter the number of terms: ");
 //scanf("%d", &n);

 printf("Fibonacci Series: ");
unsigned long  long int sum = 0;
 //for (i = 1; i <= n; ++i)
 int max = 4000000;
 while(num1 < max )
 {
//printf("%d, ", num1);
if(num1 %2 == 0) {
sum+= num1;
cout<<sum<<endl;}
 num3 = num1 + num2;
 num1 = num2;
 num2 = num3;
 }
 cout<<sum;
 return 0;
}
