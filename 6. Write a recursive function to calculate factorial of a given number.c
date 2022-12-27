#include<stdio.h>

int Fact(int n)
{
    if(n==1)
        return 1;
    return(n*Fact(n-1));

}
int main()
{
    int k;
    printf("Enter a Number:\n");
    scanf("%d",&k);
    printf("Factorial of %d is: %d",k,Fact(5));
}
