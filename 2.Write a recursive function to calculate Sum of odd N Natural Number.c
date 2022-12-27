#include<stdio.h>

int OddSum(int N1)
{
    if(N1==1)
        return 1;
    else
        return (2*N1-1+OddSum(N1-1));

}
int main()
{

 printf("Sum of odd:%d",OddSum(6));
}
