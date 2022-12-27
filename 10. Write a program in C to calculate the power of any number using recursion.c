#include<stdio.h>

int power(int b,int p)
{
    if(p==0)
        return 1;
    else
        return b*power(b,p-1);

}
 int main()
 {
     int b,p,r;
     printf("Enter a base & power value\n");
     scanf("%d %d", &b,&p);
     r=power(b,p);
     printf("\n Result: %d",r);

     return 0;
 }
