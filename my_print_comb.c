#include <stdio.h>

int my_print_comb(void);

int main()
{
    printf("Printing all possible combinations of 3 digits\n");
    my_print_comb();

    return 0;
}

int my_print_comb(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf("%i%i%i, ", i, j, k);
            }
        }
    }

    return 0;
}
