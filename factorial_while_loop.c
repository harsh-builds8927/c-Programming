#include <stdio.h>
int main ()
{
    long long int i,n,f=1;
    printf("enter a number ");
    scanf("%lld",&i);
    n=i;
    while (n>=1)
    {
        f=f*n;
        n--;

    }
    printf("%lld",f);
}