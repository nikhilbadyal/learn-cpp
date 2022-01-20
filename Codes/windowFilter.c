#include<stdio.h>
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))
//#include <iostream>
//using std::max;
int i;
//#define max(X, Y) (((X) < (Y)) ? (X) : (Y))
int sum(int *arr, int n , int k)
{
    if(k>n)
        return -1;
    int max_sum =0 , win_sum = 0;
    for(i=0;i<k;i++)
    {
        max_sum += arr[i];
    }
    win_sum = max_sum;
    for(i=k;i<n;i++)
    {
        win_sum += arr[i]-arr[i-k];
        max_sum = max(max_sum , win_sum );

    }
    return max_sum;

}
int main()
{
    int arr[] = {1,4,7,2,5,8,3,7,9,9};
    int size = 10;
    int k = 99;
    printf("%d",sum(arr,size,k));

}
