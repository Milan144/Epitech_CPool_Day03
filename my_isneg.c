#include <stdio.h>
#include <string.h>

int my_isneg(int n);

int main()
{
    int number;
    printf("\nType a number to see if its negative positive or null\n");

    scanf("%i", &number);

    my_isneg(number);

    return 0;
}

int my_isneg(int n)
{
    char *positiveNegativeOrNull = "";

    if (n < 0)
    {
        positiveNegativeOrNull = "N";
    }
    else if (n > 0)
    {
        positiveNegativeOrNull = "P";
    }
    else
    {
        positiveNegativeOrNull = "NULL";
    }

    return printf("The number is %s\n", positiveNegativeOrNull);
}

