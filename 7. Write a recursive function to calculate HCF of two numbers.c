#include<stdio.h>

int HCF(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return HCF(a-b,b);
        }
        else
        {
            return HCF(a,b-a);
        }
        return a;
    }
}
int main()
{
    printf("HCF is:%d",HCF(108,96));
}
