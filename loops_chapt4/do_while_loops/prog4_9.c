#include <stdio.h>

int main ()
{
    int number, reverse;

    printf("enter a number: ");
    scanf ("%i", &number);

    do
    {
        reverse = number % 10;
        printf("%i", reverse);
        number /= 10;
    
    } while (number !=0);

    printf("\n");

    return(0);
    
}