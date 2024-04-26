#include <stdio.h>

int main(void)
{
    int n, nsquare;

    printf("n   nsquare\n");

    for(n=1; n<10; n++)
    {
        nsquare = n*n;
        printf("%i    %i\n", n, nsquare);
    }
    return(0);
}