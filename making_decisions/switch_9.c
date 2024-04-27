// switch form of program 5.8a

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;

    printf("type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
        case '-':

            printf("%.2f\n", value1 - value2);
        case '*':
            printf("%.2f\n", value1 * value2);
        case '/':
            if (value2 == 0)
            printf("Division by zero.\n");
            else
            printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("unknown operator.\n");
            break;
    }

    return 0;
}