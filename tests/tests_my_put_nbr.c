#include "../my_put_nbr.c"

int main(void)
{
    my_put_nbr(42);
    my_put_nbr(0);
    my_put_nbr(-42);
    my_put_nbr(2147483647);
    my_put_nbr(-2147483648);
    return 0;
}
