#include <stdio.h>

// same as program 4.3 with the exeption of user input

int main (void)
{
    int n, number, triangularNumber;

    printf("what triangular number do you want? ");
    scanf ("%i", &number);

    triangularNumber = 0;

    for(n = 1; n<=number; ++n)
        triangularNumber+=n;

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}