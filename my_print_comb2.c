#include <stdio.h>

void my_print_comb2(void);

int main()
{
    printf("Printing all possible combinations of 2 digits\n");

    my_print_comb2();

    return 0;
}

void my_print_comb2(void)
{
    char combinations[100]; // Assuming a maximum of 100 combinations
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            combinations[index++] = '0' + i;
            combinations[index++] = '0' + j;
            combinations[index++] = ',';
            combinations[index++] = ' ';
        }
    }

    combinations[index - 2] = '\0'; // Replace the last comma and space with null terminator

    printf("%s\n", combinations);
}
