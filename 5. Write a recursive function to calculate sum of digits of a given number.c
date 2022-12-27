#include<stdio.h>

int SumOfDigits(int n)
{
    if(n/10==0)
        return n;
    return (n%10+SumOfDigits(n/10));
}
int main()
{
    printf("Sum of Digits:%d",SumOfDigits(123));
}
