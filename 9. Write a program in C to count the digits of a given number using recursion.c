#include<stdio.h>
 int main()
 {
     int n,c;
     printf("Enter a Number:\n");
     scanf("%d",&n);
     c=count(n);
     printf("Counted Digits are: %d\n",c);
     return 0;
 }
 int count(int n)
 {
     static int c=0;
     if(n==0)
        return c;
     else
     {
         c++;
         return count(n/10);
     }
 }
