#include<stdio.h>

int SquareSum(int N)
{

    if(N==1)
    return 1;
    return (N*N+SquareSum(N-1));
}
int main()
{
    printf("Sum of Square:%d",SquareSum(5));
    return 0;
}
