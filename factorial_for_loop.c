#include <stdio.h>
int main ()
{
    long long int i,n,f=1;
    printf("enter a number ");
    scanf("%lld",&i);
    for (n=i;n>=1;n--)
    {
f=f*n;

    }
    printf("%lld",f);
    return 0 ;
    }