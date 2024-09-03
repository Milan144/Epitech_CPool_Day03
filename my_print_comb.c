#include <stdio.h>

void my_print_comb(void);

int main()
{
    printf("Printing all possible combinations of 3 digits\n");
    my_print_comb();

    return 0;
}

void my_print_comb(void)
{
    char combinations[1000]; // Assuming a maximum of 1000 combinations
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                combinations[index++] = '0' + i;
                combinations[index++] = '0' + j;
                combinations[index++] = '0' + k;
                combinations[index++] = ',';
                combinations[index++] = ' ';
            }
        }
    }

    combinations[index - 2] = '\0'; // Replace the last comma and space with null terminator

    printf("%s\n", combinations);
}
