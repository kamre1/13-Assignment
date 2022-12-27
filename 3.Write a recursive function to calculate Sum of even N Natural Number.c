#include<stdio.h>

int EvenSum(int N1)
{
    if(N1==1)
        return 2;
    else
        return (2*N1+EvenSum(N1-1));

}
int main()
{

 printf("Sum of Even:%d",EvenSum(5));
}

