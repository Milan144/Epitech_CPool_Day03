#include <stdio.h>
#include <stdlib.h>
#include "../my_put_nbr.c"

// Function prototype
void my_put_nbr(int nb);

int main()
{
    // Test case 1: Positive number
    printf("Test case 1: Positive number\n");
    my_put_nbr(12345);
    printf("\n");

    // Test case 2: Negative number
    printf("Test case 2: Negative number\n");
    my_put_nbr(-12345);
    printf("\n");

    // Test case 3: Zero
    printf("Test case 3: Zero\n");
    my_put_nbr(0);
    printf("\n");

    return 0;
}