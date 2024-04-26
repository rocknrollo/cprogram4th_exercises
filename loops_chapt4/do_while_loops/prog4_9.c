#include <stdio.h>

int main ()
{
    int number, reverse;
// ask user for number input
    printf("enter a number: ");
    scanf ("%i", &number);
/* the program is guaranteed to run atleast once.
    the program statement is executed first then the while
    statement checks if the condition is met. if the condition is false
    the program ends if the condition is true the ps is tried again */
    do
    {
        //get remainder of number divided by 10
        
        reverse = number % 10;
        
        //prints the remainder
        
        printf("%i", reverse);
        
        //number is recalibrated to be number/10 to restart the loop
        number /= 10;
    
    } while (number !=0);

    printf("\n");

    return(0);
    
}
