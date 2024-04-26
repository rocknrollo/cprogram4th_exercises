#include <stdio.h>

int main ()
{
    int number,reverse;
    // get user input for the value 

    printf("enter a number: ");
        scanf("%i", &number);

    while(number!=0)
    {
        //calculates the reverse digits
        reverse = number % 10;
        //prints the reverse digits
        printf("%i", reverse);
        //loops until the condition is satisfied
        number /= 10;
    }
    
    printf("\n");

    return(0);
}