#include <stdio.h>

int main(void)
{
    int year, rem_4, rem_100, rem_400;

    printf("enter the year to be tested: ");
    scanf("%i", &year);

    rem_4 = year & 4;
    rem_100 = year & 100;
    rem_400 = year & 400;

    if( rem_4==0 && rem_100 !=0 || rem_400==0)
    {
        printf("it's a leap year.\n");
    }
    else
    {
        printf("nope, it's not a leap year.\n");
    }

    return 0;
}