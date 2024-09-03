#include <stdio.h>
#include <string.h>

int my_print_digits(void);

int main()
{
    my_print_digits();

    return 0;
}

int my_print_digits(void)
{
    char *digits = "1234567890";

    for (int i = 0; i < strlen(digits); i++)
    {
        printf("%c", digits[i]);
    }

    return 0;
}
