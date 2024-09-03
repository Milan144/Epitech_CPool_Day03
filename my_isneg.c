#include <stdio.h>

void my_isneg(int n);

int main()
{
    int number;
    printf("\nType a number to see if it's negative, positive, or null\n");

    scanf("%i", &number);

    my_isneg(number);

    return 0;
}

void my_isneg(int n)
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

    puts(positiveNegativeOrNull);
}
