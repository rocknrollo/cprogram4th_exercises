// program to calculate the absolute value of an integar

#include <stdio.h>

int main (void)
{
    int number;

    printf("type in your number: ");
    scanf("%i",&number);
    
    if (number<0)
    {
        number = -number;
    } 

    printf("the absolute value is %i\n", number);

    return 0;
}