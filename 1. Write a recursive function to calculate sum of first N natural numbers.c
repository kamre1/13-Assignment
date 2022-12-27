#include <stdio.h>

int sum(int n)
{
    if(n==0)
        return n;
    else
        return (n+sum(n-1));
}

int main()
{
   printf("The Sum of:%d",sum(5));

   return 0;
}
