
#include<stdio.h>
 int fib(int n)
 {
     if(n==1 || n==2)
        return(1);
     else
        return(fib(n-1)+fib(n-2));
 }
 int main()
 {
    int i, n;
    printf("Enter how many term you want to print:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        printf("%d ",fib(i));
    return 0;
 }
