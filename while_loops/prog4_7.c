/* program to find the greatest common divisor of two
        nonnegative integar values  */

#include <stdio.h>

int main (void)
{
    int u,v, temp;

    printf("Please type in two nonnegative integars.\n");
    scanf("%i%i",&u,&v);

    while (v!=0)
    {
        temp = u%v;
        u=v;
        v=temp;
    }

    printf("their greatest common divisor is %i\n",u);

    return 0;
}