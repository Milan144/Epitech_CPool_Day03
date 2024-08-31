#include <stdio.h>
#include <string.h>

int my_print_comb2(void);

int main()
{
    printf("Printing all possible combinations of 2 digits\n");

    my_print_comb2();

    return 0;
}

int my_print_comb2(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%i%i, ", i, j);
        }
    }
    return 0;
}
