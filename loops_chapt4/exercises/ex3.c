#include <stdio.h>

int main (void)
{
    int triangularNumber, n;

    for (n=5; n<=50; n +=5)
    {
        triangularNumber = n*(n+1)/2;
        printf(" %i, ",n);
    }

    return(0);
}